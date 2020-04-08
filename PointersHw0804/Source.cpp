//Максимальное число которое может быть записано 8 байтами - 11111111 11111111 11111111 11111111 11111111 11111111 11111111 11111111 
//То есть unsigned big int max value 9223372036854775807, signed big int max value 18446744073709551615

#include <iostream>
#include <time.h>
using namespace std;

int sum(int number);
int product(int number);

void main()
{
	srand(time(NULL));
	cout << "Input any number";
	int number; cin >> number;
	sum(number);
	product(number);
}

int sum(int number)
{
	int temp = rand()%10;
	int iterations = (rand() % 10)+1;
	for (int i = 0; i < iterations; i++)
	{
		cout << number << " + " << temp << " = ";
		number += temp;
		cout << number << endl;
	}
	return number;
}
int product(int number)
{
	int iterations = (rand() % 10) + 1;
	for (int i = 0; i < iterations; i++)
	{
		int temp = (rand() % 10)+1;
		cout << number << " * " << temp << " = ";
		number *= temp;
		cout << number << endl;
	}
	return number;
}