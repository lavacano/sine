/* Sine Computation program */

#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <errno.h>
#include <limits.h>
#include <stdlib.h>

int main ( int argc, char *argv[] )
{
	int	degree, answer, increment, maximum;
	double	radian, pi, value;
	
	pi = atan2 ( 0, -1 );

	// BREAKS

	if ( argc > 3 )
	{
	  printf( "Your arguments are too many\n" );
	  return -1;
	}
	// if ( strcmp(argv[1], "integer" ) != 

        printf( "argc:     %d\n", argc );
	printf ( "Enter 0 for csv list, or 1 for a console formatted list: " );
	scanf ( "%d", &answer );

	
	if (  argc == 2 )
	{
		maximum = atoi(argv[1]);
		degree = atoi(argv[1]);
	}
	else if ( argc == 1 )
	{
		degree = 0;
		maximum = 360;
		printf ( "Enter an increment value >= 1, < 360: " );
		scanf ( "%d", &increment );
			if ( increment <= 0.999999 )
			{
				printf ( "\nInvalid Entry\n" );
				return 1;
			}
	}
	else
	{
		printf ( "Enter an increment value >= 1, < 360: " );
		scanf ( "%d", &increment );
		if ( increment <= 0.999999 )
		{
			printf ( "\nInvalid Entry\n" );
			return 1;
		}
		if ( strcmp(argv[1], "integer" ) == 0 )
		{
			degree=0;
		}
		else
		{
			degree = atoi(argv[1]);
		}
	
		if ( strcmp(argv[2], "integer") == 0 )
		{
			maximum=360;
		}
		else
		{
			maximum= atoi(argv[2]);
		}
	}

	while ( degree <= maximum )
	{
  
		if ( degree == 0 && answer == 0 )
		{
			printf ( "PI = %f \n\n", pi );
			printf ( "\"Degree\",\"Sine\"\n\n" );
		}
		else if ( degree == 0 && answer == 1 )
		{
			printf ( "PI = %f \n\n", pi );
			printf ( "Degree\tSine\n\n" );
		}
		radian = pi * degree/180.0 ;
		value = sin ( radian );

		if ( answer == 0 )
		{
			printf ( "\"%d\",\"%f\"\n", degree, value );
		}

		else
		{
			printf ( "%6d\t%f\n", degree, value );
		}

		degree = degree +increment;

	}

	return 0;

}