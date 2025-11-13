#include "iostream"
using namespace std;

class SalesManager
{

public:
    int salesSize = 0, userSelection;
    bool runningStatus = 1;

    int *prices;
    string *articles;
    string text;

    // esta funcion gestiona todo, elige que mostar o hacer a partir de las instrucciones del usuario
    void run()
    {

        while (runningStatus)
        {

            userSelection = getUserSelection();
            switch (userSelection)
            {
            case 1:
                cout << "\nDame el numero de ventas a registrar: ";
                cin >> salesSize;

                prices = new int[salesSize];
                articles = new string[salesSize];

                getNewSales();

                break;

            case 2:
                printSales();
                break;

            case 3:
                modifySale();
                break;

            case 4:
                findSale();
                break;

            case 5:
                salesInRange();
                break;

            case 6:
                calculateTotal();
                break;

            case 7:
                delete[] prices;
                delete[] articles;

                runningStatus = 0;
                break;

            default:
                break;
            }
        }
    }

    // convierte los imputs del usuario a minusculas para hacer un mejor manejo en las funciones secundarias
    string mayusToMinus()
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

    // obtiene la seleccion del usuario y las envia al switch para procesarlas
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

    // crea las listas de articulos y precios usando punteros
    void getNewSales()
    {

        for (int i = 0; i < salesSize; i++)
        {
            cout << "\nIngresa el nombre del articulo: " << i + 1 << ": ";
            cin >> articles[i];
            text = articles[i];
            articles[i] = mayusToMinus();

            cout << "\nIngresa el precio del articulo: " << i + 1 << ": ";
            cin >> prices[i];
        }

        return;
    }

    // imprime los valores de las listas
    void printSales()
    {
        for (int i = 0; i < salesSize; i++)
        {
            cout << "Venta: " << articles[i] << "-> Valor: " << prices[i] << "\n";
        }
    }

    // modifica una posicion de las listas especificada por el usuario
    void modifySale()
    {
        int positionToModify, newPrice;
        string newArticle;
        cout << "Seleccione la posicion a modificar: ";
        cin >> positionToModify;
        positionToModify = positionToModify - 1;

        cout << "Ingrese el nuevo articulo: ";
        cin >> newArticle;
        text = newArticle;
        newArticle = mayusToMinus();
        articles[positionToModify] = newArticle;

        cout << "Ingrese el nuevo precio: ";
        cin >> newPrice;
        prices[positionToModify] = newPrice;

        printSales();
    }

    // busca un articulo por su nombre y muestra su precio y la posicion en la que se encuentra
    void findSale()
    {
        string article;
        cout << "Ingrese el nombre del articulo: ";
        cin >> article;
        text = article;
        article = mayusToMinus();

        for (int i = 0; i < salesSize; i++)
        {
            if (articles[i] == article)
            {
                cout << "El articulo " << article << " se encuentra en la posicion " << i + 1 << " y su valor es de: " << prices[i] << "\n";
            }
        }
    }

    // muestra los articulos de las listas que se encuentran en un rango de precios
    void salesInRange()
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

    // muestra el total de las ventas registradas
    void calculateTotal()
    {
        int total = 0;
        for (int i = 0; i < salesSize; i++)
        {
            total += prices[i];
        }
        cout << "\nEl total en ventas es: " << total;
    }
};

int main()
{
    SalesManager sales;
    sales.run();
    return 0;
}