#include <iostream>
using namespace std;

int counterDot(string sign)
{
    int numDot = 0;
    for (int i = 0; i < sign.size(); i++)
    {
        if (sign[i] == '.')
        {
            numDot++;
        }
    }
    return numDot;
}

int counterDash(string sign)
{
    int numDash = 0;
    for (int i = 0; i < sign.size(); i++)
    {
        if (sign[i] == '-')
        {
            numDash++;
        }
    }
    return numDash;
}

void validateSign()
{
    string sign = "-----.-...-...-..-.";

    int numDot = counterDot(sign);
    int numDash = counterDash(sign);

    cout << "La señal contiene " << numDot << " puntos y " << numDash << " guiones." << endl;
}

int main()
{
    validateSign();
    return 0;
}


