/****************************************************************************\
 *                                  OAMAS™                                  *
 *                                                                          *
 *                         Copyright © 2021 Aquefir                         *
 *                       Released under BSD-2-Clause.                       *
\****************************************************************************/

#ifndef INC_API__OAM_EVENTER_H
#define INC_API__OAM_EVENTER_H

#include <oam/display.h>

struct oam_events;

int oam_mainloop( struct oam_display *, struct oam_events * );

#endif /* INC_API__OAM_EVENTER_H */
