#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	RenderWindow window(sf::VideoMode(400, 400), "Jack-O-Lantern");

	CircleShape jackOLantern;
	jackOLantern.setRadius(200);
	jackOLantern.setPosition(0, 0);
	jackOLantern.setFillColor(sf::Color(255, 155, 0));

	CircleShape leftEye;
	leftEye.setPointCount(3);
	leftEye.setRadius(50);
	leftEye.setPosition(50, 75);
	leftEye.setFillColor(sf::Color::Black);

	CircleShape rightEye;
	rightEye.setPointCount(3);
	rightEye.setRadius(50);
	rightEye.setPosition(250, 75);
	rightEye.setFillColor(sf::Color::Black);

	ConvexShape mouth;
    mouth.setFillColor(Color::Black);
    mouth.setPointCount(5);
	mouth.setPoint(0, Vector2f(50, 300));
	mouth.setPoint(1, Vector2f(350, 300));
	mouth.setPoint(2, Vector2f(300, 350));
	mouth.setPoint(3, Vector2f(200, 375));
	mouth.setPoint(4, Vector2f(100, 350));

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(jackOLantern);
		window.draw(leftEye);
		window.draw(rightEye);
		window.draw(mouth);
		window.display();

	}
}