/****************************************************************************\
 *                                  OAMAS™                                  *
 *                                                                          *
 *                         Copyright © 2021 Aquefir                         *
 *                       Released under BSD-2-Clause.                       *
\****************************************************************************/

#ifndef INC_API__OAM_BASE_H
#define INC_API__OAM_BASE_H

#include <uni/types/int.h>

#include <oam/colspace.h>

struct oam_obj_ras
{
	oam_colspace_t colspace;
	void * pels;
	ptri pelct;
};

struct oam_obj_mat;

struct oam_obj
{
};

#endif /* INC_API__OAM_BASE_H */
