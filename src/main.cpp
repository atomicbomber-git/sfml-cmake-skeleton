#include <iostream>

#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "Program", sf::Style::Titlebar);

    while (window.isOpen()) {

        window.clear(sf::Color::White);
        window.display();

        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
    }


    return EXIT_SUCCESS;
}