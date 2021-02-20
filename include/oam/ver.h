/****************************************************************************\
 *                                  OAMAS™                                  *
 *                                                                          *
 *                         Copyright © 2020 Aquefir                         *
 *                       Released under BSD-2-Clause.                       *
\****************************************************************************/

#ifndef INC_API_OAM_VER_H
#define INC_API_OAM_VER_H

#define OAM_MAKEVER( _maj, _min, _pat ) \
	( ( ( (_maj)&0x3FF ) << 22 ) | ( ( (_min)&0x3FF ) << 12 ) | \
		( (_pat)&0xFFF ) )

#define OAM_GETVER_MAJOR( _ver ) ( ( ( _ver ) >> 22 ) & 0x3FF )
#define OAM_GETVER_MINOR( _ver ) ( ( ( _ver ) >> 12 ) & 0x3FF )
#define OAM_GETVER_PATCH( _ver ) ( (_ver)&0xFFF )

/* NOTE: patch version should always be set to 0 */
#define OAM_API_VER OAM_MAKEVER( 1, 4, 0 )

#endif /* INC_API_OAM_VER_H */
