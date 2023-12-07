#include "SFML/Graphics.hpp"
#include <iostream>

enum class Direction
{
    Up,
    Down,
    Left,
    Right
};

void moveTo(sf::Vector2f &position, Direction direction)
{
    switch (direction)
    {
    case Direction::Up:
        position.y -= 5;
        break;
    case Direction::Down:
        position.y += 5;

        break;
    case Direction::Left:
        position.x -= 5;
        break;
    case Direction::Right:
        position.x += 5;
        break;
    }
}

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");
    sf::Clock clock;
    sf::CircleShape shape(100, 100);

    sf::Vector2f move(100, 100);
    shape.setFillColor(sf::Color::Green);
    shape.setOutlineThickness(10);
    shape.setOutlineColor(sf::Color::Red);

    shape.setPosition(400, 400);
    Direction direction = Direction::Up;

    // sf::RectangleShape rectangle(sf::Vector2f(100, 50));
    float drawTime = 1 / 60.0f;
    // rectangle.setPosition(100, 100);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            if (event.type == sf::Event::KeyPressed)
            {
                if (event.key.code == sf::Keyboard::Escape)
                {
                    sf::RenderWindow pause(sf::VideoMode(300, 300), "Game Paused");
                    while (pause.isOpen())
                    {
                        sf::Event event;
                        while (pause.pollEvent(event))
                        {
                            if (event.type == sf::Event::Closed)
                            {
                                pause.close();
                            }
                        }
                        pause.clear();
                        pause.display();
                    }
                }
                if (event.key.code == sf::Keyboard::Left)
                {
                    // move.x -= 1;
                    direction = Direction::Left;
                }
                if (event.key.code == sf::Keyboard::Right)
                {
                    // move.x += 1;
                    direction = Direction::Right;
                }
                if (event.key.code == sf::Keyboard::Up)
                {
                    // move.y -= 1;
                    direction = Direction::Up;
                }
                if (event.key.code == sf::Keyboard::Down)
                {
                    // move.y += 1;
                    direction = Direction::Down;
                }
            }
            if (event.type == sf::Event::KeyReleased) // basıldıktan sonra event
            {
                if (event.key.code == sf::Keyboard::Left)
                {
                    std::cout << "Left Released" << std::endl;
                }
            }
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            std::cout << "Left Pressed" << std::endl;
        }

        float time = clock.getElapsedTime().asSeconds();
        if (time > drawTime)
        {
            window.clear();
            // move.x += 0.01;
            // move.y += 1;
            moveTo(move, direction);
            shape.setPosition(move);
            window.draw(shape);

            // window.draw(rectangle);
            // sf::sleep(sf::milliseconds(10));
            window.display();

            // float time = clock.restart().asSeconds();
            int fps = 1.0f / time;
            window.setTitle("FPS: " + std::to_string(fps));
            clock.restart();
        }
        else
        {
            sf::sleep(sf::seconds(drawTime - time));
        }
    }

    window.close();
    return 0;
}
