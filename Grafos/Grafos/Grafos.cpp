#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1300, 650), "SFML works!");
    sf::Texture textura;
    sf::Sprite fondo;
    textura.loadFromFile("../Recursos/mapamundi.png");
    fondo.setTexture(textura);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
       window.draw(fondo);
        window.display();
    }

    return 0;
}