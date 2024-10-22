#pragma once

#include "point.hpp"
#include <cstdlib> // for rand()

class Apple {
    Point _position;
public:
    Apple();
    Apple(const Point& position);
    Point GetPosition() const;
    void RandomizePosition(int width, int height);
};
