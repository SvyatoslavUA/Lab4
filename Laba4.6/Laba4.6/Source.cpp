#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() 
{
	double P, S;
	int i, j, n;
	S = 0;
	j = 2;
	while (j <= 20)

	{
		P = 1;
		i = (j*j);
		while (i <= 400)
		{
			P *= i;
			i += (j*j);
		}
		S += j / (j*j) + P;
		j += 2;
	}
	cout << S << endl;
	
	S = 0;
	j = 2;
	do
	{
		P = 1;
		i = (j * j);
		do
		{
			P *= i;
			i += (j * j);
		}  while (i <= 400);
		
		S += j / (j * j) + P;
		j += 2;

	} while (j <= 20);
	cout << S << endl;
	
	S = 0;
	for (j = 2; j <= 20; j+= 2)

	{
		P = 1;
		for (i = (j*j); i <= 400; i += (j * j))

		{
			P *= i;

		}
		S += j / (j * j) + P;

	}
	cout << S << endl;

	S = 0;
	for (j = 20; j >= 2; j-= 2)

	{
		P = 1;
		for (i = 400; i >= (j * j); i-= (j * j))

		{
			P *= i;
		}
		S += j / (j * j) + P;
	}
	cout << S << endl;
	return 0;
}