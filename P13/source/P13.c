#include <stdio.h>
#include <stdlib.h>
double Power(double x, int n);
void main(void)
{
	int k; double Ans;
	printf("�p��3.5��k����?�п�Jk=");
	scanf_s("%d", &k); Ans = Power(3.5, k);
	printf("3.5��%d����=%f\n", k, Ans);
	system("pause");
}
double Power(double X, int n)
{
	int i; double powerXn = 1;
	for (i = 1; i <= n; i++)
		powerXn = powerXn *X ;
	return powerXn;
}