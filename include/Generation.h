#ifndef GENERATION_H
#define GENERATION_H

#include <stdlib.h>
#include <Tile.h>
#include <GenericTile.h>
#include <vector>

typedef std::vector<Tile*> Row;
typedef std::vector<Row> Matrix;

class Generation
{
    public:
        Generation();
        virtual ~Generation();

    protected:
        Row row;
        Matrix grid;
        //SDL_Renderer* ren;
        Tile* tile;
        float generateRandomNumber(int min, int max);
    private:
};

#endif // GENERATION_H
