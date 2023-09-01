#include <SFML/Graphics.hpp>
#include "container.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    Container container(10);

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        sf::RectangleShape rect;
        rect.setSize(sf::Vector2f(200, 100));
        rect.setPosition(300, 250);
        rect.setFillColor(sf::Color::Blue);
        window.draw(rect);
        window.display();
    }

    return 0;
}