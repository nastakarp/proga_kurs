//
// Created by Анастасия on 18.04.2024.
//
#include <iostream>

struct Position {
    int id;
    const char* position;

    // Конструктор
    Position(int playerId, const char* playerPosition) : id(playerId), position(playerPosition) {}

    // Деструктор
    ~Position() {
        std::cout << "Вызван деструктор для игрока с ID " << id << std::endl;
    }
};

int main() {
    // Создание экземпляров структуры Player с использованием конструктора
    Position player1(1001, "Вратарь");
    Position player2(1002, "Нападающий");
    Position player3(1003, "Защитник");
    Position player4(1004, "Полузащитник");

    // Вывод на экран позиций игроков
    std::cout << "Позиция игрока с ID " << player1.id << ": " << player1.position << std::endl;
    std::cout << "Позиция игрока с ID " << player2.id << ": " << player2.position << std::endl;
    std::cout << "Позиция игрока с ID " << player3.id << ": " << player3.position << std::endl;
    std::cout << "Позиция игрока с ID " << player4.id << ": " << player4.position << std::endl;

    return 0;
}
