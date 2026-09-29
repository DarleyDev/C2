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