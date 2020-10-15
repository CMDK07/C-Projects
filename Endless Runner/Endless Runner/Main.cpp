#include <SFML\Graphics.hpp>
#include <SFML\Graphics\Rect.hpp>
#include <SFML\System\Clock.hpp>

#include "player.h"
#include "obstacles.h"

using namespace sf;
using namespace std;

// Press RuN!

int main()
{
	start:
	
	RenderWindow window( VideoMode( 1024, 768 ), "Apple, Windows, Homer Simpson, & a Rat" );
	Texture background;
	Sprite bgSprite;
	Sprite deadMouse;
	
	background.loadFromFile("Textures/applesimpsons.png");
	bgSprite.setTexture(background);
	bgSprite.setOrigin(0, 0);
	window.setFramerateLimit(40);

	Texture obstacleTexture;
	obstacleTexture.loadFromFile( "Textures/gem.png" );

	bool gameOver = false;

	Texture evilObstacleTexture;
	evilObstacleTexture.loadFromFile( "Textures/evilGem.png" );
	obstacle evilGem = obstacle( Vector2f( 800, 600 ), &evilObstacleTexture );

	Texture greenObstacleTexture;
	greenObstacleTexture.loadFromFile( "Textures/green_gem.png" );
	obstacle richerGem = obstacle( Vector2f( 800, 800 ), &greenObstacleTexture );

	Texture deadmause;
	deadmause.loadFromFile("Textures/deadmau5.png");
	deadMouse.setTexture(deadmause);
	deadMouse.setScale(1.5, 1.5);
	deadMouse.setPosition( 15, 16 );

	int score = 0;

	Text scoreText;
	Text easterEgg;
	Font gameFont;
	gameFont.loadFromFile( "Font/Candal.ttf" );

	scoreText.setFont( gameFont );
	scoreText.setString("Game Over :( \nC [CLOSE GAME] \nR [RESTART GAME]\nScore: " + to_string(score));
	scoreText.setCharacterSize( 50 );
	scoreText.setColor( Color::Yellow );
	scoreText.setPosition(0, -200 );

	obstacle gems[11];

	float initialXPos = 500.0f;

	for( int i = 0; i < 11; i++ )
	{
		gems[i] = obstacle( Vector2f( initialXPos, 540 ), &obstacleTexture );
		initialXPos += 110;
	}


	player thePlayer;

	Clock animateClock;
	float animateTimer = 0.0f;

	while( window.isOpen() )
	{
		Event event;

		while( window.pollEvent( event ) )
		{
			int imgCount = 0;

		
			if (animateTimer < 1.0f)
			{
				thePlayer.animatePlayer();

				if (imgCount < 6)
					imgCount++;
				else
					imgCount = 0;
				animateClock.restart();
			}
			
			if( event.type == Event::Closed )
				window.close();

			if( event.type == Event::KeyPressed )
			{
				if( event.key.code == Keyboard::Space )
				{
					if( !thePlayer.jumping )
					{
						thePlayer.jumpState = 1;
						thePlayer.jumping = true;
					}
				}
				
				if (event.key.code == Keyboard::C)
				{
					window.close();
				}
				
				if (event.key.code == Keyboard::R)
				{
					goto start;
				}
				
				if (event.key.code == Keyboard::E)
				{
					easterEgg.setFont(gameFont);
					easterEgg.setString("You have found the easter egg! YAY! :D");
					easterEgg.setCharacterSize(50);
					easterEgg.setColor(Color::Magenta);
					easterEgg.setPosition(400, -200);
					window.draw(easterEgg);
				}
			
			}
		}
	
		animateTimer = animateClock.getElapsedTime().asSeconds();
		int imgCount = 0;
		
		Clock clock;
		if( animateTimer < 3.0f )
		{
			thePlayer.animatePlayer();
			animateClock.restart();

			if (imgCount < 6)
				imgCount++;
			else
				imgCount = 0;
			clock.restart();
		}

		thePlayer.update();

		window.clear();

		if( !gameOver )
		{
			window.draw( bgSprite );
			window.draw(richerGem.obstacleSprite);

			for (int i = 0; i < 11; i++)
			{
				gems[i].update();
				window.draw(gems[i].obstacleSprite);
		
	
				if (thePlayer.playerSprite.getGlobalBounds().intersects(gems[i].obstacleSprite.getGlobalBounds()))
				{
					gems[i].reposition();
					richerGem.reposition();
					evilGem.reposition();
					score += 100;
					scoreText.setString("Game Over :( \nC [CLOSE GAME] \nR [RESTART GAME]\nScore: " + to_string(score));
				}

				if (thePlayer.playerSprite.getGlobalBounds().intersects(richerGem.obstacleSprite.getGlobalBounds()))
				{
					richerGem.reposition();
					evilGem.reposition();
					score += 500;
					scoreText.setString("Game Over :( \nC [CLOSE GAME] \nR [RESTART GAME]\nScore: " + to_string(score));
				}

				window.draw(thePlayer.playerSprite);

				if (thePlayer.playerSprite.getGlobalBounds().intersects(evilGem.obstacleSprite.getGlobalBounds()))
				{
					if (score > -1000000)
					{
						gameOver = true;
						bgSprite.setColor(Color::Black);

						window.draw(bgSprite);

						
						window.draw(deadMouse);
						window.clear();
						scoreText.setString("Game Over :( \nC [CLOSE GAME] \nR [RESTART GAME]\nScore: " + to_string(score));
						scoreText.setColor(Color::Red);
						scoreText.setCharacterSize(48);
						scoreText.setPosition(360, 300);
						
					}
				}
			}

			
			
			richerGem.update();
			window.draw(richerGem.obstacleSprite);
			window.draw(evilGem.obstacleSprite);
			evilGem.update();
				
				
				window.draw( scoreText );
				window.display();
				
				
		}
	}
}