#ifndef GEN_WORLD_H
#define GEN_WORLD_H

#include <SDL.h>

class GenWorld
{
private:
    int tileWidth;
    int tileHeight;

    float generateRandomNumber(int min, int max);

    int numTilesWide;
    int numTilesTall;
    Tile[][] grid;

    //Generation
    void createGrid();
    void createWater();
    void createGround();
    void createElevation();
    void createFlora();
    void createDesert();
    void createFauna();
    void createSentientSpecies();
    void createCities();
    void createRoads();
    void createNations();
    void createDiplomacy();

public:
    GenWorld(int newNumTilesWide, int newNumTilesTall, int newTileWidth, int newTileHeight);
};

#endif // GEN_WORLD_H
