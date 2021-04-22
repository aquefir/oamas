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
#include <SDL2/SDL.h>

struct oam_display
{
	b32d2 lw;
	void * pels;
	SDL_Renderer * ren;
	SDL_Window * win;
};

#endif /* INC__OAM_DISPLAY_H */
