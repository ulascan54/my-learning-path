#include "SFML/Graphics.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");

    sf::CircleShape shape(200, 360);

    shape.setFillColor(sf::Color::Green);
    shape.setOutlineThickness(10);
    shape.setOutlineColor(sf::Color::Red);

    shape.setPosition(400, 400);

    sf::RectangleShape rectangle(sf::Vector2f(100, 50));

    rectangle.setPosition(100, 100);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        window.clear();
        window.draw(shape);
        window.draw(rectangle);
        window.display();
    }

    window.close();
    return 0;
}
