#include "iostream"
using namespace std;

void personasMayores()
{
    string nombres[5] = {"Carlos", "Marta", "Lucía", "Tomás", "Sofía"};
    int edades[5] = {20, 16, 22, 15, 19};

    cout << "Las personas mayores de 18 años son: \n";
    for (int i = 0; i < 5; i++)
    {
        if (edades[i] >= 18)
        {
            cout << nombres[i] << "\n";
        }
    }
}
int main()
{
    personasMayores();
    return 0;
}