#include "SFML/Graphics.hpp"
#include "Player.h"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML WORK!");

	Player player;

	sf::Clock clock;

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

				break;

			}
		}

		sf::Time time = clock.getElapsedTime();

		player.update(time.asMilliseconds());

		clock.restart().asMilliseconds();

		window.clear();

		player.draw(window);

		window.display();
	}
}