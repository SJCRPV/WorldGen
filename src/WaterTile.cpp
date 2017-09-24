#include "WaterTile.h"

WaterTile::WaterTile(int newXCoor, int newYCoor)
{
    fileDir = "../img/WaterTile.png";
    xCoor = newXCoor;
    yCoor = newYCoor;
}

WaterTile::~WaterTile()
{
    //dtor
}
