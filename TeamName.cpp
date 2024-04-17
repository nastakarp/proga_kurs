//
// Created by Анастасия on 17.04.2024.
//
#include <iostream>

struct TeamName {
    char* name;

    // Конструктор
    TeamName(const char* cmd) {
        int len = length(cmd);
        name = new char[len + 1];
        copy(cmd, name, len);
    }

    // Деструктор
    ~TeamName() {
        cleanup(name);
        std::cout << "Вызван деструктор для команды" << std::endl;
    }

private:
    // Функция для определения длины строки
    int length(const char* str) {
        int len = 0;
        while (str[len] != '\0') {
            len++;
        }
        return len;
    }

    // Функция для копирования строки
    void copy(const char* source, char* destination, int len) {
        for (int i = 0; i < len; ++i) {
            destination[i] = source[i];
        }
        destination[len] = '\0'; // Добавляем завершающий нулевой символ
    }

    // Функция для освобождения памяти
    void cleanup(char* ptr) {
        delete[] ptr;
    }
};

int main() {
    // Создание экземпляра структуры Command с использованием конструктора
    TeamName cmd("run");

    // Вывод на экран
    std::cout << "Команда: " << cmd.name << std::endl;

    return 0;
}
