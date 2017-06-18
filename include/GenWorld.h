#ifndef GEN_WORLD_H
#define GEN_WORLD_H

int tileWidth;
int tileHeight;

int numTilesWide;
int numTilesTall;
void createGrid();

SDL_Surface* waterTile;
void createWater();

SDL_Surface* groundTile;
void createGround();

SDL_Surface* mountainTile;
void createElevation();

SDL_Surface* grassTile;
SDL_Surface* treeTile;
void createFlora();

SDL_Surface* desertTile;
void createDesert();

void createFauna();
void createSentientSpecies();

SDL_Surface* cityTile;
void createCities();

SDL_Surface* roadTile;
void createRoads();

void createNations();
void createDiplomacy();

#endif // GEN_WORLD_H
