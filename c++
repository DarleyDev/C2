#include <iostream>
#include <string>
using namespace std;

int main() {
    string surname, name;
    int age;
    double weight;

    cout << "Enter your surname: ";
    cin >> surname;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your weight: ";
    cin >> weight;

    cout << "Hello, My name is " << surname << " " << name << "!";
    cout << " I am " << age << " years old.";
    cout << " I weigh " << weight << " kg.";

    return 0;
}