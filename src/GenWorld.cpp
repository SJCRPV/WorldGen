
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

class GenWorld
{
    void createWater()
    {

    }

    void createGrid()
    {
        for(int i = 0; i < numTilesWide; i++)
        {
            for(int j = 0; j < numTilesTall; j++)
            {
                Tile tile = new Tile(tileWidth, tileHeight, i, j);
                createWater(tile);
            }
        }
    }

    GenWorld(int newNumTilesWide, int newNumTilesTall, int newTileWidth, int newTileHeight)
    {
        numTilesWide = newNumTilesWide;
        numTilesTall = newNumTilesTall;
        tileWidth = newTileWidth;
        tileHeight = newTileHeight;
        createGrid();
        createGround();
        createElevation();
        createFlora();
        createDesert();
        createFauna();
        createSentientSpecies();
        createCities();
        createRoads();
        createNations();
        createDiplomacy();
    }
};
