#include <SFML/Graphics.hpp>

int main()
{
    // â ����
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Shapes");
    window.setFramerateLimit(60);

    // �̺�Ʈ ���� ����
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // ȭ�� �����
        window.clear(sf::Color::White);

        // ȭ�� ������Ʈ
        window.display();
    }

    return 0;
}