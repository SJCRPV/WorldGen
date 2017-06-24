
#include <Tile.h>

int Tile::getXCoor()
{
    return xCoor;
}
int Tile::getYCoor()
{
    return yCoor;
}

Tile::Tile(SDL_Renderer ren, int newWidth, int newHeight, int newXCoor, int newYCoor)
{
    width = newWidth;
    height = newHeight;
    xCoor = newXCoor;
    yCoor = newYCoor;
}
