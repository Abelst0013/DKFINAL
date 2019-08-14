#include "SFML/Graphics.hpp"
#include <iostream>
#include "Juego.h"

using namespace sf;
using namespace std;

void Menu()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Donkey Kong");

	sf::Font font;
	if (!font.loadFromFile("ARCADECLASSIC.ttf"))
		throw("No se pudo cargar la fuente");

	Text text;
	text.setFont(font);
	text.setFillColor(sf::Color::Blue);
	text.setCharacterSize(110);
	text.setString("DONKEY KONG");
	text.setPosition(100.f, window.getSize().y / 50);

	Text options;
	options.setFont(font);
	options.setCharacterSize(36);
	options.setString("Press Enter");
	options.setPosition(300, 480);

	Text data;
	data.setFont(font);
	data.setCharacterSize(24);
	data.setString("1981  NINTENDO  OF  AMERICA  INC");
	data.setFillColor(sf::Color::Yellow);
	data.setPosition(230, 550);


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			else if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::Key::Enter)
					window.close();
			}
		}


		window.clear();
		window.draw(text);
		window.draw(options);
		window.draw(data);
		window.display();

	}
}

int main(int argc, char * args[])
{
	Menu();
	juego * partida1;
	partida1 = new juego(800, 900, "Donkey Kong");

	return 0;
}
