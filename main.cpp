#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>


int main()
{
    int i = 0 , j = 0, pas = 20 ;
    sf::Clock clock;
    sf::Time cpt = clock.restart();
    float dt = 6  , elapsedTime_s = 0 , totalTime_s =  0;
    

    while(1)
    {
        cpt = clock.getElapsedTime();
        elapsedTime_s = cpt.asSeconds();
        //std::cout << "cpt = " << cpt.asSeconds() << std::endl;

        if(  elapsedTime_s >= dt )
        {
            totalTime_s += dt;
            i += pas;
            j += pas;
            sf::Mouse::setPosition(sf::Vector2i(i, j));
            std :: cout << "position changed to (" << i << ", " << j << ")." ;
            std :: cout << "  " << totalTime_s << "s"<< std::endl;
           
            // renitialiser tout
            clock.restart();
            pas = -pas;

        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::LAlt) && sf::Keyboard::isKeyPressed(sf::Keyboard::RAlt))
        {
            std :: cout << "au revoir !" << std::endl;
            break;
            exit(1);

        }

    }
 

    return 0;
}