#include <iostream>

using namespace std;

bool isCorrect(char userAnswer, char correctAnswer)
{
    if (userAnswer == correctAnswer)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int questinScore(bool correct)
{
    if (correct)
    {
        return 10;
    }
    else
    {
        return 0;
    }
}
char playQuiz()
{
    char answer1 = 'a', answer2 = 'b', answer3 = 'c', userAnswer;
    int score = 0;
    bool correct;
    cout << "Cual es la respuesta de la pregunta 1?\n";
    cin >> userAnswer;
    correct = isCorrect(userAnswer, answer1);
    score += questinScore(correct);

    cout << "Cual es la respuesta de la pregunta 2?\n";
    cin >> userAnswer;
    correct = isCorrect(userAnswer, answer2);
    score += questinScore(correct);

    cout << "Cual es la respuesta de la pregunta 3?\n";
    cin >> userAnswer;
    correct = isCorrect(userAnswer, answer3);
    score += questinScore(correct);

    cout << "Vale tu puntaje es: " << score << "\n";
}

int main()
{
    playQuiz();
    return 0;
}