#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

void main(void) {
	RenderWindow window(VideoMode(1000, 800), "shootingG");
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {	
			if (event.type == sf::Event::Closed)
				window.close();
		}
		RectangleShape player;
		player.setSize(Vector2f(165.f, 51.f));
		player.setFillColor(Color::Magenta);
		player.setPosition(500.f, 400.f);

		window.clear();
		window.draw(player);
		window.display();
	}
}