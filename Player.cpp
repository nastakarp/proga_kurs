//
// Created by Анастасия on 18.04.2024.
//
#include <iostream>

struct Player {
    char* lastName;
    char* firstName;
    char* patronymic;

    // Конструктор
    Player(const char* last, const char* first, const char* patr) {
        int len = length(last);
        lastName = new char[len + 1];
        copy(last, lastName, len);

        len = length(first);
        firstName = new char[len + 1];
        copy(first, firstName, len);

        len = length(patr);
        patronymic = new char[len + 1];
        copy(patr, patronymic, len);
    }

    // Деструктор
    ~Player() {
        cleanup(lastName);
        cleanup(firstName);
        cleanup(patronymic);
        std::cout << "poka" << std::endl;
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
    setlocale (LC_ALL,"Russian");

    // Создание экземпляра структуры Person с использованием конструктора
    Player person("Ivanov", "Ivan", "Ivanovi");

    // Вывод на экран
    std::cout << "surname: " << person.lastName << std::endl;
    std::cout << "name: " << person.firstName << std::endl;
    std::cout << "patronymic: " << person.patronymic << std::endl;

    return 0;
}
