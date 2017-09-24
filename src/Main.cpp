#include <stdio.h>
#include <SDL.h>
#include <SDL_image.h>
#include <GenWorld.h>

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

////Starts up SDL and creates window
//bool init();
//
////Loads media
//bool loadMedia();
//
////Frees media and shuts down SDL
//void close();

//The window we'll be rendering to
SDL_Window* gWindow = NULL;

//The surface contained by the window
SDL_Surface* gScreenSurface = NULL;

//The renderer that paints the surface
SDL_Renderer* ren = NULL;

GenWorld * worldGen = NULL;

bool init()
{
    //Initialization flag
    bool success = true;

    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
        success = false;
    }
    else
    {
        //Create window
        gWindow = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
        if( gWindow == NULL )
        {
            printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
            success = false;
        }
        else
        {
            //Initialize PNG loading
            int imgFlags = IMG_INIT_PNG;
            if( !( IMG_Init( imgFlags ) & imgFlags ) )
            {
                printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
                success = false;
            }
            else
            {
                ren = SDL_CreateRenderer(gWindow, -1, 0);

                //Get window surface
                gScreenSurface = SDL_GetWindowSurface( gWindow );

                //Initialize the worldGen instance
                GenWorld * worldGen = new GenWorld(ren, 10, 10, 1, 1);
                worldGen->generateWorld();
            }
        }
    }
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
	//Deallocate surface
	SDL_FreeSurface( gScreenSurface );
	gScreenSurface = NULL;

	//Destroy window
	SDL_DestroyWindow( gWindow );
	gWindow = NULL;

	IMG_Quit();

	//Quit SDL subsystems
	SDL_Quit();
}

int main( int argc, char* args[] )
{
	//Start up SDL and create window
	if( !init() )
	{
		printf( "Failed to initialize!\n" );
	}
	else
	{
	    bool quit = false;
	    SDL_Event e;
	    while(!quit)
        {
            while(SDL_PollEvent(&e))
            {
                //Load media
                if( !loadMedia() )
                {
                    printf( "Failed to load media!\n" );
                }
                else
                {
                    //Apply the image
                    //SDL_BlitSurface( gHelloWorld, NULL, gScreenSurface, NULL );



                    //Update the surface
                    SDL_UpdateWindowSurface( gWindow );
                }

                if(e.type == SDL_KEYDOWN)
                {
                    quit = true;
                }
            }
        }
	}

	//Free resources and close SDL
	close();

	return 0;
}
