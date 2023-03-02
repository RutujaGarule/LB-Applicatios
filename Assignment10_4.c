// Accept temperature in fahrenheit and convert into celcis

#include<stdio.h>

double FhToCs(float fTemp)
{
	printf("%f\n",fTemp);
	
	double dCelsius = 0.0;
	dCelsius = ((fTemp - 32) * 5/9);
	printf("%lf\n",dCelsius);
	return dCelsius;
}


int main()
{
	float fValue = 0.0;
	double dRet = 0.0;
	
	printf("Enter temperature in fahrenheit\n");
	scanf("%f",&fValue);
	
	dRet = FhToCs(fValue);
	printf("Temperature in Celcius ia : %lf\n",dRet);
	
	return 0;
}