#include "../include/GenWorld.h"

/*
    Generation order:
    - Grid
    - Ground
    - Water
    - Climate
    - Flora
    - Fauna
    - Sentience
    - Cities
    - Roads
    - Nations
    - Diplomacy
*/

enum TileTypes
{
    GENERIC,
    WATER,
    GROUND,
    MOUNTAIN,
    FLORA,
    DESERT,
    CITY,
    ROAD
};

// ----------------- GETTERS AND SETTERS -----------------
Matrix GenWorld::getGrid()
{
	return grid;
}
// --------------- GETTERS AND SETTERS END ---------------

void GenWorld::createGrid()
{
    for(int i = 0; i < numTilesTall; i++)
    {
        grid.push_back(row);
        for(int j = 0; j < numTilesWide; j++)
        {
            tile = new GenericTile(i, j);
            grid[i].push_back(*tile);
        }
    }
}

void GenWorld::generateWorld()
{
    createGrid();
//    createGround();
//    createWater();
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

GenWorld::GenWorld(int nNumTilesWide, int nNumTilesTall, int nTileWidth, int nTileHeight)
{
	numTilesWide = nNumTilesWide;
	numTilesTall = nNumTilesTall;
	tileWidth = nTileWidth;
	tileHeight = nTileHeight;
}
