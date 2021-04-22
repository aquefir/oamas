/****************************************************************************\
 *                                  OAMAS™                                  *
 *                                                                          *
 *                         Copyright © 2021 Aquefir                         *
 *                       Released under BSD-2-Clause.                       *
\****************************************************************************/

#include "display.h"

#include <uni/memory.h>

void oam_display_fini( struct oam_display * d )
{
	if( d )
	{
		uni_free( d );
	}
}

uni_err_t oam_display_init(
	struct oam_display_initopts opts, struct oam_display ** d )
{
	if( !d )
	{
		uni_die( );
	}

	{
		struct _fbg * fbg;
		u32 w = 640, l = 360;
		char * title = "OAMAS demo";

		if( opts.title != NULL )
		{
			title = opts.title;
		}

		if( opts.canvas_sz.is )
		{
			w = opts.canvas_sz.val.x;
			l = opts.canvas_sz.val.y;
		}

		if( !glfwInit( ) )
		{
			return UNI_ERRCODE_MAKE( UNI_ERR_DESC_SUCCESS,
				UNI_ERR_MOD_COMMON,
				UNI_ERR_EMASK_OORES,
				UNI_ERR_LVL_FATAL );
		}

		fbg = fbg_glfwSetup( w, l, 3, title, 0, 0 );

		if( !fbg )
		{
			return UNI_ERRCODE_MAKE( UNI_ERR_DESC_SUCCESS,
				UNI_ERR_MOD_COMMON,
				UNI_ERR_EMASK_OORES,
				UNI_ERR_LVL_FATAL );
		}

		{
			struct oam_display * disp =
				uni_alloc( sizeof( struct oam_display ) );

			disp->lw.x = w;
			disp->lw.y = l;
			disp->pels = uni_alloc( sizeof( u32 ) * w * l );
			disp->win  = fbg;

			*d = disp;
		}
	}

	return 0;
}
