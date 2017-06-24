#include <stdlib.h>
#include <GenWorld.h>

/*
    Generation order:
    - Grid
    - Water
    - Ground
    - Elevation
    - Flora
    - Desert
    - Fauna
    - Sentients
    - Cities
    - Roads
    - Nations
    - Diplomacy
*/

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

float GenWorld::generateRandomNumber(int min, int max)
{
    return rand() % max + min;
}

void GenWorld::createGround()
{

}

void GenWorld::createWater()
{

}

void GenWorld::createGrid()
{
    grid = new Tile[numTilesWide][numTilesTall];
    for(int i = 0; i < numTilesWide; i++)
    {
        for(int j = 0; j < numTilesTall; j++)
        {

            grid[i][j] =
        }
    }
}

GenWorld::GenWorld(int newNumTilesWide, int newNumTilesTall, int newTileWidth, int newTileHeight)
{
    numTilesWide = newNumTilesWide;
    numTilesTall = newNumTilesTall;
    tileWidth = newTileWidth;
    tileHeight = newTileHeight;
    createGrid();
    createGround();
//    createElevation();
//    createFlora();
//    createDesert();
//    createFauna();
//    createSentientSpecies();
//    createCities();
//    createRoads();
//    createNations();
//    createDiplomacy();
}
