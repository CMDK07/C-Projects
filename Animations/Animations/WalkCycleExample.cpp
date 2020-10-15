#include <SFML\Graphics.hpp>
#include <SFML\Graphics\Rect.hpp>

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(200, 200), "Sprites!");

	Sprite mySprite;
	Texture myTexture;
	IntRect rect[7];
	//Expand for all rects
	rect[0] = IntRect(0, 0, 64, 64);
	rect[1] = IntRect(64, 0, 64, 64);
	rect[2] = IntRect(128, 0, 64, 64);
	rect[3] = IntRect(192, 0, 64, 64);
	rect[4] = IntRect(0, 64, 64, 64);
	rect[5] = IntRect(64, 64, 64, 64);
	rect[6] = IntRect(128, 64, 64, 64);

	myTexture.loadFromFile("Textures/walkcycle.png");

	mySprite.setTexture(myTexture);
	mySprite.setTextureRect(rect[0]);
	mySprite.setOrigin(15, 16);
	mySprite.setScale(1.5, 1.5);
	mySprite.setPosition(100, 100);

	sf::Clock clock;
	int imgCount = 0;
	float timer = 0;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		timer = clock.getElapsedTime().asSeconds();
		if (timer > 0.1f)
		{
			if (imgCount < 6)
				imgCount++;
			else
				imgCount = 0;
			clock.restart();
		}

		window.clear();
		mySprite.setTextureRect(rect[imgCount]);
		window.draw(mySprite);
		window.display();
	}
}