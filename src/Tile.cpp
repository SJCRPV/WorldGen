#include "../include/Tile.h"

float Tile::getXCoor()
{
    return position.x;
}
float Tile::getYCoor()
{
    return position.y;
}

sf::Texture Tile::getTexture()
{
	return texture;
}

void Tile::loadTexture()
{
	texture.loadFromFile(fileDir.c_str());
}

void Tile::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.texture = &texture;
	states.transform = sf::Transform().translate(position);
	target.draw(quad, states);
}

void Tile::setTextureArea()
{
	// define its texture area to be a WIDTHxHEIGHT rectangle starting at (0, 0)
	quad[0].texCoords = sf::Vector2f(0.f, 0.f);
	quad[1].texCoords = sf::Vector2f(WIDTH, 0.f);
	quad[2].texCoords = sf::Vector2f(WIDTH, HEIGHT);
	quad[3].texCoords = sf::Vector2f(0.f, HEIGHT);
}

void Tile::setWindowPosition(int gridXCoord, int gridYCoord)
{
	float x = gridXCoord * WIDTH/2;
	float y = gridYCoord * HEIGHT/2;
	position.x = x;
	position.y = y;

	// define it as a rectangle, located at (x, y) and with size WIDTHxHEIGHT
	quad[0].position = sf::Vector2f(x, y);
	quad[1].position = sf::Vector2f(x + WIDTH, y);
	quad[2].position = sf::Vector2f(x + WIDTH, y + HEIGHT);
	quad[3].position = sf::Vector2f(x, y + HEIGHT);
}

Tile::Tile()
{
}
