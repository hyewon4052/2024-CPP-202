#include <SFML/Graphics.hpp>

int main()
{
    // 창 생성
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Shapes");

    // 원 객체 생성
    sf::CircleShape circle(100.f);
    circle.setFillColor(sf::Color::Red);
    circle.setPosition(100.f, 100.f);

    // 사각형 객체 생성
    sf::RectangleShape rectangle(sf::Vector2f(200.f, 100.f));
    rectangle.setFillColor(sf::Color::Blue);
    rectangle.setPosition(400.f, 300.f);

    // 이벤트 루프 시작
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // 화면 지우기
        window.clear();

        // 도형 그리기
        window.draw(circle);
        window.draw(rectangle);

        // 화면 업데이트
        window.display();
    }

    return 0;
}
