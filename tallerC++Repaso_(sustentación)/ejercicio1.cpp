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
    stature = stature * 100; 
    cout << "\nHola " << name << ", tienes " << age << " años y mides " << stature << " centimetros." << "\n";
    return 0;
}