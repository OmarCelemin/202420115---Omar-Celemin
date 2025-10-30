#include "iostream"
using namespace std;

void average()
{
    float grades[5] = {3.5, 4.0, 2.8, 3.9, 4.2};
    float averageStudents;
    float lastValue = 0;

    for (int i = 0; i < 5; i++)
    {
        float grade = grades[i];
        lastValue += grade;
    }

    averageStudents = lastValue / 5;

    cout << "El promedio de las notas es: " << averageStudents << "\n";
}

int main()
{
    average();
    return 0;
}