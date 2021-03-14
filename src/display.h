/****************************************************************************\
 *                                  OAMAS™                                  *
 *                                                                          *
 *                         Copyright © 2021 Aquefir                         *
 *                       Released under BSD-2-Clause.                       *
\****************************************************************************/

#ifndef INC__OAM_DISPLAY_H
#define INC__OAM_DISPLAY_H

#define GLFW_INCLUDE_NONE

/* parent header */
#include <oam/display.h>

/* foreign headers */
#include <GLFW/glfw3.h>

/* local headers */
#include "glad.h"

struct oam_display
{
	b32d2 lw;
	void * pels;
};

#endif /* INC__OAM_DISPLAY_H */
