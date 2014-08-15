/* Sine Computation program */

#include <stdio.h>
#include <math.h>
#include <unistd.h>

int main ( int argc, char *argv[] )
{
	int	degree, answer, increment, maximum;
	double	radian, pi, value;

	pi = atan2 ( 0, -1 );

	printf ( "Enter 0 for csv list, or 1 for a console formatted list: " );
	scanf ( "%d", &answer );

	printf ( "Enter an increment value >= 1, < 360: " );
	scanf ( "%d", &increment );

	if ( increment <= 0.999999 )
	{
		printf ( "\nInvalid Entry\n" );
		return 1;
	}

	if ( argv[1] == "" )
	{
		degree=0;
	}
	else
	{
		degree = atoi(argv[1]);
	}
	
	if ( argv[2] == "" )
	{
		maximum=360;
	}
	else
	{
		maximum= atoi(argv[2]);
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