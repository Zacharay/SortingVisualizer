#include <SFML/Graphics.hpp>
#include "container.h"
#include "renderer.h"
#include "bubbleSort.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(1200, 900), "My window");
    
    Container container(100);
    renderContainer(container, window);
    bubbleSort(container, window);
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
    }

    return 0;
}