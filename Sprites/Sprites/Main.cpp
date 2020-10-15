#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(600, 780), "Sprites!");

	Texture playerTex;
	playerTex.loadFromFile("Textures/emoji.png");

	Sprite playerSprite;
	playerSprite.setTexture(playerTex);
	playerSprite.setOrigin(32, 32);
	playerSprite.setScale(.3,.3);
	playerSprite.setPosition(100, 100);

	bool movingUp = false;
	bool movingDown = false;
	bool movingLeft = false;
	bool movingRight = false;
	
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();

			if (event.type == Event::KeyPressed)
			{
				if (event.key.code == Keyboard::W)
				{
					movingUp = true;
				}
				if (event.key.code == Keyboard::S)
				{
					movingDown = true;
				}
				if (event.key.code == Keyboard::A)
				{
					movingLeft = true;
				}
				if (event.key.code == Keyboard::D)
				{
					movingRight = true;
				}
			}

			if (event.type == Event::KeyReleased)
			{
				if (event.key.code == Keyboard::W)
				{
					movingUp = false;
				}
				if (event.key.code == Keyboard::S)
				{
					movingDown = false;
				}
				if (event.key.code == Keyboard::A)
				{
					movingLeft = false;
				}
				if (event.key.code == Keyboard::D)
				{
					movingRight = false;
				}
			}
		}

		Vector2f movement(0, 0);

		if (movingUp)
			movement.y -= 1.0f;
		if (movingDown)
			movement.y += 1.0f;
		if (movingRight)
			movement.x += 1.0f;
		if (movingLeft)
			movement.x -= 1.0f;

		playerSprite.move(movement);
		window.clear();
		window.draw(playerSprite);
		window.display();
	}
}