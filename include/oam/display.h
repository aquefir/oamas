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
#include <uni/types/opt/int.h>
#include <uni/types/opt/bound.h>

#include <oam/colspace.h>

struct oam_display;

struct oam_display_initopts
{
	UNI_OPTION( b32d2 ) canvas_sz;
	UNI_OPTION( oam_colspace_t ) colspace;
	char * title;
};

uni_err_t oam_display_init(
	struct oam_display_initopts, struct oam_display ** );
void oam_display_fini( struct oam_display * );

uni_err_t oam_display_getlw( const struct oam_display *, b32d2 * );
uni_err_t oam_display_getsubrect(
	const struct oam_display *, b32d2, p32d2, void * );

#endif /* INC_API__OAM_DISPLAY_H */
