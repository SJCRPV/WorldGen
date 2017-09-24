#ifndef GENERICTILE_H
#define GENERICTILE_H

#include <Tile.h>


class GenericTile : public Tile
{
    public:
        GenericTile(int newXCoor, int newYCoor);
        virtual ~GenericTile();
        SDL_Texture* loadTile(SDL_Renderer* ren);

    protected:

    private:
};

#endif // GENERICTILE_H
