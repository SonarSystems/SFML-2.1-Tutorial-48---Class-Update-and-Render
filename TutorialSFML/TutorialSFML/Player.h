#pragma once
#include "SFML/Graphics.hpp"

class Player
{
public:
	Player();
	~Player();

	void update(float dt);
	void draw(sf::RenderWindow &window);

private:
	sf::Sprite playerSprite;
	sf::Texture playerTexture;
};

