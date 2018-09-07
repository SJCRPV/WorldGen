#include <SFML\Graphics.hpp>
//#include <GenWorld.h>

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

//GenWorld * worldGen = NULL;

bool init()
{
    //Initialization flag
    bool success = true;

    return success;
}

bool loadMedia()
{
	//Loading success flag
	bool success = true;



	return success;
}

void close()
{

}

int main( int argc, char* args[] )
{
	//Start up SFML and create window
	init();

    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "SFML Works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

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
            window.draw(shape);
            window.display();
        }
    }

	//Free resources and close SFML
	close();

	return 0;
}
