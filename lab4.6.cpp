#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double S2, S;
	int k, i;
	k = 1;
	i = 1;
	S2 = 0;
	while (k <= 20)
	{
		S = 0;
		i = 1;
		while (i <= k)
		{
			S += cos(i + k);
			i++;
		}
		S2 += sin(1. * k) * sin(1. * k) + abs(S);
		k++;
	}
	cout << S2 << endl;
	S2 = 0;
	k = 1;
	do {
		S = 0;
		i = 1;
		do {
			S += cos(i + k);
			i++;
		} while (i <= k);
		S2 += sin(1. * k) * sin(1. * k) + abs(S);
		k++;
	} while (k <= 20);
	cout << S2 << endl;
	S2 = 0;
	for (k = 1; k <= 20; k++)
	{
		S = 0;
		for (i = 1; i <= k; i++)
		{
			S += cos(i + k);
		}
		S2 += sin(1. * k) * sin(1. * k) + abs(S);
	}
	cout << S2 << endl;
	S2 = 0;
	for (k = 20; k >= 1; k--)
	{
		S = 0;
		for (i = k; i >= 1; i--)
		{
			S += cos(i + k);
		}
		S2 += sin(1. * k) * sin(1. * k) + abs(S);
	}
	cout << S2 << endl;
	return 0;
}