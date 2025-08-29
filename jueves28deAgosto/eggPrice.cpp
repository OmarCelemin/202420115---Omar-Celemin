#include <iostream>

using namespace std;
string name;

double eggPrice = 5;
int amount;
double total;
int userPay;
double change;
double discount = 0.1;

int main()
{
	cout << "Cuantos huevos vas a comprar? " << eggPrice << " por unidad, si compras mas de 10 huevos obtienes un 10% de descuento :) ";
	cin >> amount;

	if (amount > 10)
	{
		cout << "\n Has aplicado al descuento :)";
		eggPrice = eggPrice - eggPrice * discount;
	}

	total = eggPrice * amount;
	cout << "\n Vale, " << amount << " huevos te cuestan " << total;

	while (userPay < total)
	{
		cout << "\n Con cuanto vas a pagar?";
		cin >> userPay;
	}

	change = userPay - total;
	cout << "\n Dale, tu cambio es " << change;

	return 0;
}