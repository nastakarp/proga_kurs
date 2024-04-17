//
// Created by Анастасия on 18.04.2024.
//
#include <iostream>

struct Status {
    int id;
    const char* status;

    // Конструктор
    Status(int playerId, const char* playerStatus) : id(playerId), status(playerStatus) {}

    // Деструктор
    ~Status() {
        std::cout << "Вызван деструктор для статуса игрока с ID " << id << std::endl;
    }
};

int main() {
    // Создание экземпляров структуры PlayerStatus с использованием конструктора
    Status player1(1001, "Кандидат");
    Status player2(1002, "Член команды");

    // Вывод на экран статусов игроков
    std::cout << "Статус игрока с ID " << player1.id << ": " << player1.status << std::endl;
    std::cout << "Статус игрока с ID " << player2.id << ": " << player2.status << std::endl;

    return 0;
}
