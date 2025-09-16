#include <iostream>

using namespace std;

int main()
{
    string name;
    int age;
    double stature;
    cout << "Ingrese su nombre: ";
    cin >> name;
    cout << "\nIngrese su edad: ";
    cin >> age;
    cout << "\nIngrese su estatura (en metros): ";
    cin >> stature;
    cout << "\nHola " << name << ", tienes " << age << " años y mides " << stature << " metros." << "\n";
    return 0;
}