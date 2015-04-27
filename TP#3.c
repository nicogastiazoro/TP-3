/* Nicolas Gastiazoro 
   27-04-2015
   Imprimir tabla de conversión de grados Fahrenheit a Celsius */

#include <stdio.h>

double GetCelsius(int);

int main(void)
{
      int fahr;
      const int LOWER = 0;
      const int UPPER = 300;
      const int STEP = 20;
      
      for (fahr = LOWER ; fahr <= UPPER; fahr = fahr + STEP)
          printf("%3d\t%6.2f\n",fahr,GetCelsius(fahr));
}

double GetCelsius(int f)
{
       double celsius = 0;
       
       celsius = (5.0/9.0)*(f-32.0);
       
       return celsius;
}
