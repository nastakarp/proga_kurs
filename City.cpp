//
// Created by Анастасия on 18.04.2024.
//
#include <iostream>

struct City {
    char* name;

    // Конструктор
    City(const char* cityName) {
        int len = length(cityName);
        name = new char[len + 1];
        copy(cityName, name, len);
    }

    // Деструктор
    ~City() {
        cleanup(name);
        std::cout << "Вызван деструктор для города" << std::endl;
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
    // Создание экземпляра структуры City с использованием конструктора
    City city("Москва");

    // Вывод на экран
    std::cout << "Город: " << city.name << std::endl;

    return 0;
}
