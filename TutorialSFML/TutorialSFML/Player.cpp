#include "Player.h"


Player::Player()
{
	if (!playerTexture.loadFromFile("Paddle Large.png"))
	{
		// handle error
	}

	playerSprite.setTexture(playerTexture);
}


Player::~Player()
{
}

void Player::update(float dt)
{

}

void Player::draw(sf::RenderWindow &window)
{
	window.draw(playerSprite);
}