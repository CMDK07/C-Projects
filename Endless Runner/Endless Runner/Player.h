#pragma once
#include <SFML\Graphics.hpp>
#include <string>

using namespace sf;
using namespace std;

class player {
public:
	Texture playerTexture;
	Texture jumpingTexture;
	Sprite playerSprite;
	IntRect walkRect[7];
	IntRect jumpRect[6];

	bool jumping;
	int jumpState;
	int count;

	player();
	player(Vector2f position, string texFileLoc, string jumpFileLoc);

	int animatePlayer();
	void update();
};