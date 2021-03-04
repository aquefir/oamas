/****************************************************************************\
 *                                  OAMAS™                                  *
 *                                                                          *
 *                         Copyright © 2021 Aquefir                         *
 *                       Released under BSD-2-Clause.                       *
\****************************************************************************/

#ifndef INC__OAM_DISPLAY_H
#define INC__OAM_DISPLAY_H

#include <oam/display.h>

struct oam_display
{
	struct bound2 lw;
	void * pels;
};

#endif /* INC__OAM_DISPLAY_H */
