#include <iostream>

using namespace std;

int mayorDeTres(int a, int b, int c)
{
    switch (a)
    {
    case constant expression:
        /* code */
        break;
    
    default:
        break;
    }
    
}
int main()
{
    int a, b, c, result;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;
    result = mayorDeTres(a, b, c);
    cout << "El numero mayor es: " << result << "\n";
    return 0;
}