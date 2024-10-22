#include "game_engine.hpp"
#include <iostream>

GameEngine::GameEngine() : _board(20, 20) {}

void GameEngine::Init() {
    // Initialize game state
    _apple.RandomizePosition(_board.GetWidth(), _board.GetHeight());
}

void GameEngine::Run() {
    // Main game loop
    Direction dir = Direction::Right; // Default direction
    while (true) {
        // Simulate movement
        _snake.Move(dir);
        CheckCollision();

        // For simplicity, we don't implement actual rendering here.
        std::cout << "Snake position: (" << _snake.GetPosition().x << ", " << _snake.GetPosition().y << ")\n";
        std::cout << "Apple position: (" << _apple.GetPosition().x << ", " << _apple.GetPosition().y << ")\n";

        // Break loop condition can be added here
        // For example, if snake collides with the wall or itself.
    }
}

void GameEngine::CheckCollision() {
    // Check if snake eats the apple
    if (_snake.GetPosition().x == _apple.GetPosition().x &&
        _snake.GetPosition().y == _apple.GetPosition().y) {
        _snake.Eat(_apple);
        _apple.RandomizePosition(_board.GetWidth(), _board.GetHeight());
    }
}
