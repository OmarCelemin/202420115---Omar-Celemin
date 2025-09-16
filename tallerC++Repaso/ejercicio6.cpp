#include <iostream>

using namespace std;

int mayorDeTres(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        
    }
    else if (b > c)
    {
        if (b > a)
        {
            return b;
        }
    }
    else if (c > a)
    {
        if (c > b)
        {
            return c;
        }   
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