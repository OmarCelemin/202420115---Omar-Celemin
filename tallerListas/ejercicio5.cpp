#include "iostream"
using namespace std;

void productWhitPrice()
{
    string products[3] = {"Pan", "Leche", "Queso"};
    float prices[3] = {1500, 3200, 4800};

    string product;
    float price;

    cout << "A cotinuacion se presentan los productos con sus respectivos precios: \n";
    
    for (int i = 0; i < 3; i++)
    {
        product = products[i];
        price = prices[i];

        cout << product << " " << price << "\n";
    }
}

int main()
{
    productWhitPrice();
    return 0;
}