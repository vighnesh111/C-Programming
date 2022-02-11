// double FV(double rate, unsigned int nperiods, double PV) - 
// Calculates and returns the Future Value of an investment based on the compound interest formula FV = PV * (1+rate)^(nperiods)

#include <stdio.h>
#include <stdlib.h>

double FV(double rate, unsigned int nperiods, double PV);

unsigned int nperiods;
double PV, rate, FVa;
int i = 1, y, temp, tempo;

int main()
{
	printf("Enter PV: ");
	scanf("%lf",&PV);

	printf("Enter rate: ");
	scanf("%lf",&rate);

	printf("Enter period (in years): ");
	scanf("%u",&nperiods);

	FVa = FV(rate, nperiods, PV);
	printf("The returns of FV are: %lf", FVa);

	return 0;
}
double FV(double rate, unsigned int nperiods, double PV)
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
	FVa = PV * y;
	return FVa;
}

