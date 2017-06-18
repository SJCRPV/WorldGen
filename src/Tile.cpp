
#include <Tile.h>

class Tile
{
public:
    int getXCoor()
    {
        return xCoor;
    }
    int getYCoor()
    {
        return yCoor;
    }

private:
    Tile(int newTileWidth, int newTileHeight, int xCoor, int yCoor)
    {
        tileWidth = newTileWidth;
        tileHeight = newTileHeight;
        this.xCoor = xCoor;
        this.yCoor = yCoor;
    }
};
