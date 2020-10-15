#include <SFML\Graphics.hpp>

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(500, 200), "Text");

	Text myText;
	Text myTextTwo;
	Text myTextThree;
	Text myTextFour;
	Text myTextFive;
	Text myTextSix;
	Text myTextSeven;
	Text myTextEight;


	Font myFont;
	myFont.loadFromFile("font/Candal.ttf");

	myText.setFont(myFont);
	myTextTwo.setFont(myFont);
	myTextThree.setFont(myFont);
	myTextFour.setFont(myFont);
	myTextFive.setFont(myFont);
	myTextSix.setFont(myFont);
	myTextSeven.setFont(myFont);
	myTextEight.setFont(myFont);
	myTextTwo.setString("\nMARIO IS GAY");
	myTextThree.setString("\n\nMARIO IS GAY");
	myTextFour.setString("\n\n\nMARIO IS GAY");
	myTextFive.setString("\n\n\n\nMARIO IS GAY");
	myTextSix.setString("\n\n\n\n\nMARIO IS GAY");
	myTextSeven.setString("\n\n\n\n\n\nMARIO IS GAY");
	myTextEight.setString("\n\n\n\n\n\n\nMARIO IS GAY");
	myText.setString("MARIO IS GAY");

	myTextTwo.setCharacterSize(12);
	myTextThree.setCharacterSize(12);
	myTextFour.setCharacterSize(12);
	myTextFive.setCharacterSize(12);
	myTextSix.setCharacterSize(12);
	myTextSeven.setCharacterSize(12);
	myTextEight.setCharacterSize(12);
	myText.setCharacterSize(12);

	myText.setColor(Color::White);
	myTextTwo.setColor(Color::Blue);
	myTextThree.setColor(Color::Red);
	myTextFour.setColor(Color::Green);
	myTextFive.setColor(Color::Yellow);
	myTextSix.setColor(Color::Cyan);
	myTextSeven.setColor(Color::Magenta);
	myTextEight.setColor(Color::Transparent);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		myText.move(.1f, 0);
		myTextTwo.move(.1f, 0);
		myTextThree.move(.1f, 0);
		myTextFour.move(.1f, 0);
		myTextFive.move(.1f, 0);
		myTextSix.move(.1f, 0);
		myTextSeven.move(.1f, 0);
		myTextEight.move(.1f, 0);


		if (myText.getPosition().x > 500 && myTextTwo.getPosition().x > 500 && myTextThree.getPosition().x > 500 && myTextFour.getPosition().x > 500 && myTextFive.getPosition().x > 500 && myTextSix.getPosition().x > 500 && myTextSeven.getPosition().x > 500 && myTextEight.getPosition().x > 500)
		{
			myText.setPosition(0, 0);
			myTextTwo.setPosition(0, 0);
			myTextThree.setPosition(0, 0);
			myTextFour.setPosition(0, 0);
			myTextFive.setPosition(0, 0);
			myTextSix.setPosition(0, 0);
			myTextSeven.setPosition(0, 0);
			myTextEight.setPosition(0, 0);
		}

		window.clear();
		window.draw(myText);
		window.draw(myTextTwo);
		window.draw(myTextThree);
		window.draw(myTextFour);
		window.draw(myTextFive);
		window.draw(myTextSix);
		window.draw(myTextSeven);
		window.draw(myTextEight);
		window.display();
	}
}