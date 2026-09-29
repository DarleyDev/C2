# C2
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");

    cout << "Задан треугольник со сторонами 3 см, 4 см, 5 см\n";
    cout << "Периметр треугольника равен:\n";
    cout << "0.12 м\t12 см\t120 мм \n \v";

    int length1;
    int width1;
    string text;
    
    cout << "Введите длину и ширину \n";
    cin >> length1 >> width1;
    cout << "Введите кто выполнил задание (курс, имя) \n";
    cin.ignore();
    getline(cin, text);
    cout << "Длина:"<< length1 << "м\t" << "Ширина:" << width1 << "м\n";
    cout << "Задание выполнил:" << text;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int students = 111;
    int seats = 21;

    int buses = (students + seats - 1) / seats;
    int freeSeats = buses * seats - students;

    cout << "Потребуется " << buses << " автобусов. ";
    cout << "В последнем автобусе " << freeSeats << "/" << seats
         << " часть мест останется свободной.";

    return 0;
}
