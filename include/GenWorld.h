#ifndef GEN_WORLD_H
#define GEN_WORLD_H

#include "Generation.h"

class GenWorld : public Generation
{
private:
    int tileWidth;
    int tileHeight;

    int numTilesWide;
    int numTilesTall;

    //Generation
    void createGrid();
    void createGround();
    void createWater();
    void createElevation();
    void createClimate();
    void createFlora();
    void createFauna();
    void createSentientSpecies();
    void createCities();
    void createRoads();
    void createNations();
    void createDiplomacy();

public:
	Matrix getGrid();
    void generateWorld();
	GenWorld(int nNumTilesWide, int nNumTilesTall, int nTileWidth, int nTileHeight);
};

#endif // GEN_WORLD_H
