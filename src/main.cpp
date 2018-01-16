#include <iostream>

#include <SFML/Graphics.hpp>


const int MAX_FPS = 60;
const int MICROSECS_PER_FRAME = 1000000 / MAX_FPS;

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "Program", sf::Style::Titlebar);
    window.setVerticalSyncEnabled(true);

    sf::Clock clock;
    u_int elapsed = 0;
    while (window.isOpen()) {

        elapsed += clock.getElapsedTime().asMicroseconds();
        clock.restart();

        window.clear(sf::Color::White);
        window.display();

        // Update loop
	while (elapsed > MICROSECS_PER_FRAME) {
            // Do something cool

            elapsed -= MICROSECS_PER_FRAME;
        }

        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
    }


    return EXIT_SUCCESS;
}
