#ifndef WATERTILE_H
#define WATERTILE_H

#include <Tile.h>


class WaterTile : public Tile
{
    public:
        WaterTile(int newXCoor, int newYCoor);
        virtual ~WaterTile();

    protected:

    private:
};

#endif // WATERTILE_H
