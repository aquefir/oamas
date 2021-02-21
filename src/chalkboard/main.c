/****************************************************************************\
 *                                  OAMAS™                                  *
 *                                                                          *
 *                         Copyright © 2020 Aquefir                         *
 *                       Released under BSD-2-Clause.                       *
\****************************************************************************/

int main( int ac, char* av[] )
{
	FILE* f;
	long sz;

	f = fopen( "/dev/fb0", "r" );

	fseek( f, 0L, SEEK_END );
	sz = ftell( f );

	fclose( f );

	printf( "fb0 size: %ul bytes\n", sz );

	return 0;
}
