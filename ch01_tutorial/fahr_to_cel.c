/*-------------------------------------------------------------
*	Name:  Mark Ashinhust
* 	Title: Fahrenheit to Celsius Conversion Calculator
*	
*	Description: This calculator demonstrates converting
*		     from fahrenheit to celsius using 
*		     primitive and general C coding methods
*		     and standards for demonstration. Reading
*		     comments for this code shall provide an
*		     understanding of the general C
*		     fundamentals being used.
*
*-------------------------------------------------------------*/

/* Function Includes */
#include <stdio.h>

#define HEAD_MODIFICATION 1
#define CEL_TO_FAHR 1

int main( void )
{

	/* These can both be defined on the same line. However, I will use my own coding standards */
	
	/* Declare Variables */
	float fahr;
	float cel;

	int lower;
	int upper;
	int step;

	/* Initialize Variables */
	cel  = 0.0f;

 	lower = 0;
	upper = 300;
	step  = 20;

	fahr = lower;

	if( !CEL_TO_FAHR )
	{
		if( HEAD_MODIFICATION )
		{
			printf( "\nFahrenheit     Celsius\n-----------------------\n" );
		}

		while( fahr != upper )
		{
			cel = ( 5.0 / 9.0 ) * ( fahr - 32.0 );

			printf( "%3.0f %17.1f\n", fahr, cel );

			fahr += step;
		}
	}
	else
	{

		if( HEAD_MODIFICATION )
		{
			printf( "\nCelsius     Fahrenheit\n-----------------------\n" );
		}

		cel = lower;
		fahr = 0;

		while( cel != upper )
		{
			fahr = ( cel * 1.8 ) + 32.0;

			printf( "%3.0f %17.1f\n", cel, fahr );

			cel += step;
		}

	}

	printf( "\n" );

	return 0;
}
