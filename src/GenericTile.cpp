#include "GenericTile.h"

SDL_Texture* GenericTile::loadTile(SDL_Renderer* ren)
{
    SDL_Texture *tileTexture = IMG_LoadTexture(ren, fileDir.c_str());
    if(tileTexture == nullptr)
    {
        SDL_LogError(SDL_LOG_CATEGORY_ERROR, "LoadTile");
    }
    return tileTexture;
}

GenericTile::GenericTile(int newXCoor, int newYCoor) : Tile()
{
    fileDir = "img/GenericTile.png";
    xCoor = newXCoor;
    yCoor = newYCoor;
}

GenericTile::~GenericTile()
{
    //dtor
}
