/****************************************************************************\
 *                                  OAMAS™                                  *
 *                                                                          *
 *                         Copyright © 2021 Aquefir                         *
 *                       Released under BSD-2-Clause.                       *
\****************************************************************************/

#ifndef INC_API__OAM_DISPLAY_H
#define INC_API__OAM_DISPLAY_H

#include <uni/err.h>
#include <uni/types/bound.h>
#include <uni/types/point.h>

struct oam_display;

enum
{
	OAM_COLSPACE_RGB24,
	OAM_COLSPACE_RGBA32,
	OAM_COLSPACE_RGB555,
	OAM_COLSPACE_RGB565,
	OAM_COLSPACE_RGBA5551,
	OAM_COLSPACE_RGBA4444,
	MAX_OAM_COLSPACE
};

struct oam_display_initopts
{
	b32d2 canvas_sz;
	unsigned colspace : 3;
};

uni_err_t oam_display_init( const struct oam_display_initopts *,
	struct oam_display ** );
void oam_display_fini( struct oam_display * );

uni_err_t oam_display_getlw( const struct oam_display *, b32d2 * );
uni_err_t oam_display_getsubrect( const struct oam_display *, b32d2,
	p32d2, void * );

#endif /* INC_API__OAM_DISPLAY_H */
