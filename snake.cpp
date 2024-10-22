#include "snake.hpp"

Snake::Snake() : _nr_segments(1) {
    _segments[0] = {5, 5}; // Starting position
}

Snake::Snake(const Point& position) : _nr_segments(1) {
    _segments[0] = position;
}

void Snake::Move(Direction direction) {
    // Move the snake's body
    for (int i = _nr_segments - 1; i > 0; --i) {
        _segments[i] = _segments[i - 1];
    }
    // Move the head
    switch (direction) {
        case Direction::Top:
            _segments[0].y--;
            break;
        case Direction::Bottom:
            _segments[0].y++;
            break;
        case Direction::Left:
            _segments[0].x--;
            break;
        case Direction::Right:
            _segments[0].x++;
            break;
    }
}

int Snake::GetSize() const {
    return _nr_segments;
}

Point Snake::GetPosition() const {
    return _segments[0];
}

void Snake::Eat(const Apple& apple) {
    // Logic to grow the snake when it eats an apple
    // For simplicity, we just increase the segment count
    _nr_segments++;
}
