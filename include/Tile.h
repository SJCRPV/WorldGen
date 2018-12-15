#ifndef TILE_H
#define TILE_H

#include <string>
#include <SFML/Graphics.hpp>

class Tile : public sf::Drawable, public sf::Transformable
{
protected:
    static const int WIDTH = 32;
    static const int HEIGHT = 32;
    std::string fileDir;
	sf::Texture texture;
	sf::Vector2f position;
	sf::VertexArray quad;

	void loadTexture();
	void setTextureArea();

public:
    Tile();
	float getXCoor();
	float getYCoor();
	sf::Texture getTexture();
	void setWindowPosition(int gridXCoord, int gridYCoord);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

#endif // TILE_H
