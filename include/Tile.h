#ifndef TILE_H
#define TILE_H

#include <string>

class Tile
{
protected:
    static const int width = 32;
    static const int height = 32;
    int xCoor;
    int yCoor;
    std::string fileDir;

public:
    Tile();
    int getXCoor();
    int getYCoor();
    //virtual SDL_Texture* loadTile(SDL_Renderer* ren) { return NULL; };
};

#endif // TILE_H
