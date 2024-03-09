#include <iostream>
#include <string>
#include <Windows.h>
#include <cstring>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int milk;
    int water;
    int answer = 0;
    int latte = 0;
    int americano = 0;
    cout << "Введите колличество миллитров воды в кофемашине(не меньше 270 мл): \n"; cin >> water;
    cout << "Введите колличество миллитров молока в кофемашине(не меньше 30 мл): \n"; cin >> milk;

    while (water >= 270 && milk >= 30) {

        cout << "Выберите напиток (1 - американо, 2 - латте)"; cin >> answer;
        if (answer == 1 && water > 300) {
            water -= 300;
            cout << "Ваш напиток готов! Вот ваш американо!\n";
            americano++;
        }
        if (answer == 2 && water >= 270 && milk >= 30) {
            water -= 270;
            milk -= 30;
            cout << "Ваш напиток готов! Вот ваш латте\n";
            latte++;
        }
    }
    if (answer == 1 || answer == 2 && water < 300 && milk < 30) {
        if (water < 270) {
            cout << "Не хватает воды\n";
        }if (milk < 30) {
            cout << "Не хватает молока\n";
        }
    }
    cout << "Ингрдиентов осталось:\n" << "Вода: " << water << "\n" << "Молоко: " << milk << "\n";
    cout << "Кружек американо приготовлено: " << americano << "\n" << "Куржек латте приготовлено: " << latte;


}