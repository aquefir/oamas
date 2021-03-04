/****************************************************************************\
 *                                  OAMAS™                                  *
 *                                                                          *
 *                         Copyright © 2021 Aquefir                         *
 *                       Released under BSD-2-Clause.                       *
\****************************************************************************/

int main( int ac, char * av[] )
{
	FILE * f;
	long i;
	int r;

#if 0
	f = fopen( "/dev/fb0", "r+" );
	for( i = 0, r = 0; r != EOF; ++i )
	{
		r = fputc( 0, f );
	}

	printf( "i == %lu\n", i );
#endif /* 0 */

	return 0;
}
