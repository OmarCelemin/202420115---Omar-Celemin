#include "iostream"
using namespace std;

void largest()
{
    int numbers[6] = {8, 12, 5, 20, 7, 15};
    int num;
    int lastNumber = 0;

    for (int i = 0; i < 6; i++)
    {
        num = numbers[i];

        if (num > lastNumber)
        {
            lastNumber = num;
        }
    }
    cout << "El numero mayor de la lista es: " << lastNumber << "\n";
}

int main()
{
    largest();
    return 0;
}