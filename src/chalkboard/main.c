/****************************************************************************\
 *                                  OAMAS™                                  *
 *                                                                          *
 *                         Copyright © 2021 Aquefir                         *
 *                       Released under BSD-2-Clause.                       *
\****************************************************************************/

#include <uni/log.h>

#include <stdio.h>
#include <oam/display.h>
#include <oam/eventer.h>

static void promenade( void )
{
	struct oam_display * disp;
	struct oam_events * evs;
	uni_err_t e;
	struct oam_display_initopts disp_initopts;
	disp_initopts.canvas_sz.val.x = 1280;
	disp_initopts.canvas_sz.val.y = 720;
	disp_initopts.canvas_sz.is    = 1;
	disp_initopts.colspace.val    = OAM_COLSPACE_RGB24;
	disp_initopts.colspace.is     = 1;
	disp_initopts.title           = "OAM Chalkboard";

	e = oam_display_init( &disp_initopts, &disp );

	if( e )
	{
		uni_perror( "ERROR::\nDESCRIPTION: %s\nMODULE: %s\nLEVEL: %s",
			uni_err_desc_tostr( e ),
			uni_err_mod_tostr( e ),
			uni_err_lvl_tostr( e ) );

		return;
	}

	evs = NULL;

	while( !oam_mainloop( disp, evs ) )
		;
}

int main( int ac, char * av[] )
{
	uni_print( "Good morning, Vietnam!" );
	promenade( );
	printf( "\n\n" );

	return 0;
}
