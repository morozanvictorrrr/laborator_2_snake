#include "apple.hpp"

Apple::Apple() {
    RandomizePosition(20, 20); // Set default size of the board
}

Apple::Apple(const Point& position) : _position(position) {}

Point Apple::GetPosition() const {
    return _position;
}

void Apple::RandomizePosition(int width, int height) {
    _position.x = rand() % width;
    _position.y = rand() % height;
}
