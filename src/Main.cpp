#include <SFML\Graphics.hpp>
#include "../include/GenWorld.h"

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

GenWorld* worldGen = NULL;

void close()
{

}

void drawGrid(sf::RenderWindow& window)
{
	Matrix grid = worldGen->getGrid();
	for (int i = 0; i < grid.size(); i++)
	{
		Row gridRow = grid[i];
		for (int j = 0; j < gridRow.size(); j++)
		{
			grid[i][j].draw(window, sf::RenderStates());
		}
	}
}

bool loadMedia()
{
	//Loading success flag
	bool success = true;



	return success;
}

bool init()
{
	//Initialization flag
	bool success = true;
	worldGen = new GenWorld(16, 16, 32, 32);
	worldGen->generateWorld();
	return success;
}

int main( int argc, char* args[] )
{
	//Start up SFML and create window
	init();

    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "SFML Works!");

	while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
            {
                window.close();
            }

            window.clear();
			drawGrid(window);
            window.display();
        }
    }

	//Free resources and close SFML
	close();

	return 0;
}
