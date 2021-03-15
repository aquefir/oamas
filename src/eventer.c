/****************************************************************************\
 *                                  OAMAS™                                  *
 *                                                                          *
 *                         Copyright © 2021 Aquefir                         *
 *                       Released under BSD-2-Clause.                       *
\****************************************************************************/

#include "eventer.h"

#include <uni/err.h>

#include "display.h"

int oam_mainloop( struct oam_display * disp, struct oam_events * evs )
{
	if( !disp )
	{
		uni_die( );
	}

	if( glfwWindowShouldClose( disp->win ) )
	{
		glfwTerminate( );

		return 1;
	}

	glClear( GL_COLOR_BUFFER_BIT );

	glfwSwapBuffers( disp->win );
	glfwPollEvents( );

	return 0;
}
