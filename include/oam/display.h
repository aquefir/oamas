/****************************************************************************\
 *                                  OAMAS™                                  *
 *                                                                          *
 *                         Copyright © 2021 Aquefir                         *
 *                       Released under BSD-2-Clause.                       *
\****************************************************************************/

#ifndef INC_API__OAM_DISPLAY_H
#define INC_API__OAM_DISPLAY_H

#include <uni/err.h>
#include <uni/types/mathprim.h>

struct oam_display;

uni_err_t oam_display_getlw( const struct oam_display *, struct bound2 * );
uni_err_t oam_display_getsubrect( const struct oam_display *, struct bound2,
	struct point2, void * );

#endif /* INC_API__OAM_DISPLAY_H */
