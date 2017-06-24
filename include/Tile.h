
#ifndef TILE_H
#define TILE_H
class Tile
{
protected:
    SDL_Texture* tileTexture;
    int width;
    int height;
    int xCoor;
    int yCoor;

public:
    Tile(int newWidth, int newHeight, int xCoor, int yCoor);
    int getXCoor();
    int getYCoor();
};

#endif // TILE_H

