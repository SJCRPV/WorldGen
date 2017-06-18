
#ifndef TILE_H
#define TILE_H

enum TileTypes
{
    WATER,
    GROUND,
    MOUNTAIN,
    FLORA,
    DESERT,
    CITY,
    ROAD
};

int tileWidth;
int tileHeight;
int xCoor;
int yCoor;

getXCoor();
getYCoor();
changeImage();
setTileType(int tileType);

#endif // TILE_H

