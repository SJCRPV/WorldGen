#include "../include/GenericTile.h"

GenericTile::GenericTile(int newXCoor, int newYCoor) : Tile()
{
    fileDir = "img/GenericTile.png";
	quad = *new sf::VertexArray(sf::Quads, 4);
	setWindowPosition(newXCoor, newYCoor);
	setTextureArea();
	loadTexture();
}

GenericTile::~GenericTile()
{
    //dtor
	delete &texture;
	delete &quad;
	delete &position;
	delete &fileDir;
}

