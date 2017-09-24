#include <GenWorld.h>

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



void GenWorld::createWater()
{
}

void GenWorld::createGround()
{

}

void GenWorld::createGrid()
{
    for(int i = 0; i < numTilesTall; i++)
    {
        grid.push_back(row);
        for(int j = 0; j < numTilesWide; j++)
        {
            tile = new GenericTile(i, j);
            grid[i].push_back(tile);
            tile->loadTile(ren);
            renderTitle(grid[i][j]);
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

GenWorld::GenWorld(SDL_Renderer *ren, int newNumTilesWide, int newNumTilesTall, int newTileWidth, int newTileHeight)
{
    numTilesWide = newNumTilesWide;
    numTilesTall = newNumTilesTall;
    tileWidth = newTileWidth;
    tileHeight = newTileHeight;
    Tile* tile = new Tile();
}
