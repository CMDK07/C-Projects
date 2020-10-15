#include "obstacles.h"

using namespace sf;

obstacle::obstacle() {}

obstacle::obstacle(Vector2f position, Texture* obstacleTexture)
{
	obstacleSprite.setTexture(*obstacleTexture);
	obstacleSprite.setScale(1.5, 1.5);
	obstacleSprite.setPosition(position.x, position.y);

	srand(time(NULL));
}

void obstacle::update()
{
	obstacleSprite.move(-11, 0);
	if (obstacleSprite.getPosition().x < 0)
	{
		obstacleSprite.setPosition(1050,
		obstacleSprite.getPosition().y);
	}
}

void obstacle::reposition()
{
	obstacleSprite.setPosition(Vector2f(1050, randomizeYPos()));
}

int obstacle::randomizeYPos()
{
	int randomY;
	int thePosition = 0;
	randomY = rand() % 3;
	if (randomY == 0)
	{
		thePosition = 550;
	}
	else if (randomY == 1)
	{
		thePosition = 450;
	}
	else if (randomY == 2)
	{
		thePosition = 350;
	}
	return thePosition;
}