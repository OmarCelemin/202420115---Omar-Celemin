#include <iostream>
using namespace std;

string mayusToMinus(string text)
{

    for (int i = 0; i < text.length(); i++)
    {
        if ((text[i] >= 'A') && (text[i] <= 'Z'))
        {
            text[i] += 32;
        }
    }
    return text;
}
int main()
{
    string articulo;

    cout << " sasfesfws:";
    cin >> articulo;

     cout << "\n" << mayusToMinus(articulo);

   
    return 0;
}