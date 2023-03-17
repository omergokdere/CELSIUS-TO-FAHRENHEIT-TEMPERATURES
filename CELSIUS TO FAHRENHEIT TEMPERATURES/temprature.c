#include <stdio.h>
#define CBEGIN 10
#define CLIMIT -5
#define CSTEP 5


int main(void)
{

	int celsius;
	double fahrenheit;

	printf("   Celsius    Fahrenheit\n");

	for ( celsius = CBEGIN;
		  celsius >= CLIMIT;
		  celsius -= CSTEP) {

			  fahrenheit = 1.8 * celsius + 32.0;
			  printf("%6c%3d%8c%7.2f\n", ' ' , celsius, ' ' , fahrenheit);
	}
	 printf(" \n\n\n\n"
	      "	                                                    *****************\n"
          "			                                    * OMER GOKDERE  *\n"
          "	                                                    *****************\n");
	return 0;
}