// double PV(double rate, unsigned int nperiods, double FV) - 
//Calculates and returns the Present Value of an investment based on the compound interest formula FV = PV * (1+rate)nperiods

#include <stdio.h>
#include <stdlib.h>

double PV(double rate, unsigned int nperiods, double FV);

unsigned int nperiods;
double PVa, rate, FV;
int i = 1, y, temp, tempo;

int main()
{
	printf("Enter FV: ");
	scanf("%lf",&FV);

	printf("Enter rate: ");
	scanf("%lf",&rate);

	printf("Enter period (in years): ");
	scanf("%u",&nperiods);

	PVa = PV(rate, nperiods, FV);
	printf("The PV was: %lf", PVa);

	return 0;
}
double PV(double rate, unsigned int nperiods, double FV)
{
	rate = rate + 1;
	temp = rate;
	while(i < nperiods)
	{
		y = temp * rate;
		tempo = y;
		temp = tempo;
		i++;
	}
	PVa = FV / y;
	return PVa;
}

