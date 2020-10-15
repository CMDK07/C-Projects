#pragma once
#include <SFML\Graphics.hpp>

using namespace sf;

class obstacle {
public:
	Texture obstacleTexture;
	Texture greenObstacleTexture;
	Texture evilObstacleTexture;
	Sprite obstacleSprite;
	float yPos;

	obstacle();
	obstacle(Vector2f position, Texture* obstacleTexture);

	void update();
	void reposition();
	int randomizeYPos();
};
