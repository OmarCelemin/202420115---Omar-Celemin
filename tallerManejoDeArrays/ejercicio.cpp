#include "iostream"
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

int getUserSelection()
{
    int userSelection;

    cout << "\nPor favor seleccione:\n\n"
         << "1. Registrar o reiniciar ventas.\n"
         << "2. Mostrar todas las ventas.\n"
         << "3. Modificar una venta.\n"
         << "4. Buscar una venta.\n"
         << "5. Mostrar ventas dentro de rango de precios.\n"
         << "6. Calcular total de ventas.\n"
         << "7. Salir. \n\n"
         << "Ingrese una opcion: ";

    cin >> userSelection;
    return userSelection;
}

void getNewSales(string *&articles, int *&prices, int salesSize)
{

    articles = new string[salesSize];
    prices = new int[salesSize];

    for (int i = 0; i < salesSize; i++)
    {
        cout << "\nIngresa el nombre del articulo: " << i + 1 << ": ";
        cin >> articles[i];
        articles[i] = mayusToMinus(articles[i]);

        cout << "\nIngresa el precio del articulo: " << i + 1 << ": ";
        cin >> prices[i];
    }

    return;
}

void printSales(int prices[], string articles[], int salesSize)
{
    for (int i = 0; i < salesSize; i++)
    {
        cout << "Venta: " << articles[i] << "-> Valor: " << prices[i] << "\n";
    }
}

void modifySale(int prices[], string articles[], int salesSize)
{
    int positionToModify, newPrice;
    string newArticle;
    cout << "Seleccione la posicion a modificar: ";
    cin >> positionToModify;
    positionToModify = positionToModify - 1;

    cout << "Ingrese el nuevo articulo: ";
    cin >> newArticle;
    newArticle = mayusToMinus(newArticle);
    articles[positionToModify] = newArticle;

    cout << "Ingrese el nuevo precio: ";
    cin >> newPrice;
    prices[positionToModify] = newPrice;

    printSales(prices, articles, salesSize);
}

void findSale(int prices[], string articles[], int salesSize)
{
    string article;
    cout << "Ingrese el nombre del articulo: ";
    cin >> article;
    article = mayusToMinus(article);

    for (int i = 0; i < salesSize; i++)
    {
        if (articles[i] == article)
        {
            cout << "El articulo " << article << " se encuentra en la posicion " << i + 1 << " 3y su valor es de: " << prices[i] << "\n";
        }
    }
}

void salesInRange(int prices[], string articles[], int salesSize)
{
    int minVal, maxVal;
    cout << "\nIngresa el valor minimo:";
    cin >> minVal;
    cout << "\nIngresa el valor maximo:";
    cin >> maxVal;

    cout << "\nEstos articulos se encuentran en el rango de precios de " << minVal << " a " << maxVal << "\n\n";

    for (int i = 0; i < salesSize; i++)
    {
        if ((prices[i] >= minVal) && (prices[i] <= maxVal))
        {
            cout << articles[i] << "->" << prices[i] << "\n";
        }
    }
}

void calculateTotal(int prices[], int salesSize)
{
    int total = 0;
    for (int i = 0; i < salesSize; i++)
    {
        total += prices[i];
    }
    cout << "\nEl total en ventas es: " << total;
}

void run()
{
    int salesSize = 0, userSelection;
    bool runningStatus = 1;

    int *prices;
    string *articles;

    while (runningStatus)
    {

        userSelection = getUserSelection();
        switch (userSelection)
        {
        case 1:
            cout << "\nDame el numero de ventas a registrar: ";
            cin >> salesSize;

            getNewSales(articles, prices, salesSize);

            break;

        case 2:
            printSales(prices, articles, salesSize);
            break;

        case 3:
            modifySale(prices, articles, salesSize);
            break;

        case 4:
            findSale(prices, articles, salesSize);
            break;

        case 5:
            salesInRange(prices, articles, salesSize);
            break;

        case 6:
            calculateTotal(prices, salesSize);
            break;

        case 7:
            delete[] prices;
            delete[] articles;

            runningStatus = 0;
            break;

        default:
            cout << "Opcion no valida :(";
            break;
        }
    }
}
int main()
{
    run();
    return 0;
}