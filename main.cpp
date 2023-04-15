#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{

	RenderWindow window(VideoMode(400, 400), L"Новый проект", Style::Default);

	window.setVerticalSyncEnabled(true);

	sf::Image image;
	image.loadFromFile("image.png");
	sf::Texture texture;
	texture.loadFromImage(image);

	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setPosition(20,20);
	sprite.setScale(0.1,0.1);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear(Color::Blue);
		window.draw(sprite);
		window.display();
	}
	return 0;
}