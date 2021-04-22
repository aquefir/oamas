/****************************************************************************\
 *                                  OAMAS™                                  *
 *                                                                          *
 *                         Copyright © 2021 Aquefir                         *
 *                       Released under BSD-2-Clause.                       *
\****************************************************************************/

#include "eventer.h"

#include <uni/err.h>
#include <uni/types/float.h>

#include "display.h"
#include "fbg_glfw.h"

int oam_mainloop( struct oam_display * disp, struct oam_events * evs )
{
	f32 x = 0, y = 0, velx = 3.4, vely = 3.425;

	if( !disp )
	{
		uni_die( );
	}

	if( fbg_glfwShouldClose( disp->fbg ) )
	{
		return 1;
	}

	fbg_glfwClear( );

	fbg_clear( disp->fbg, 0 );
	fbg_rect( disp->fbg, x, x, 40, 40, 255, 0, 0 );
	fbg_draw( disp->fbg );
	fbg_flip( disp->fbg );

	x += velx;
	y += vely;

	if( x <= 0 || x > disp->fbg->width - 40 )
	{
		velx = -velx;
	}

	if( y <= 0 || y > disp->fbg->height - 40 )
	{
		vely = -vely;
	}

	return 0;
}
