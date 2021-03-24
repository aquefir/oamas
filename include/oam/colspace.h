/****************************************************************************\
 *                                  OAMAS™                                  *
 *                                                                          *
 *                         Copyright © 2021 Aquefir                         *
 *                       Released under BSD-2-Clause.                       *
\****************************************************************************/

#ifndef INC_API__OAM_COLSPACE_H
#define INC_API__OAM_COLSPACE_H

#define OAM_COLSPACE_GET_CHTYPE( N ) ( ( ( N ) >> 5 ) & 0x7 )
#define OAM_COLSPACE_GET_ALPHA( N ) ( ( ( N ) >> 4 ) & 0x1 )
#define OAM_COLSPACE_GET_BPC( N ) ( ( ( N ) >> 1 ) & 0x7 )
#define OAM_COLSPACE_GET_PAL( N ) ( (N)&0x1 )
#define OAM_COLSPACE_SET_CHTYPE( N, X ) ( ( N ) = ( (X)&0x7 ) << 5 )
#define OAM_COLSPACE_SET_ALPHA( N, X ) ( ( N ) = ( (X)&0x1 ) << 4 )
#define OAM_COLSPACE_SET_BPC( N, X ) ( ( N ) = ( (X)&0x7 ) << 1 )
#define OAM_COLSPACE_SET_PAL( N, X ) ( ( N ) = (X)&0x1 )

#define OAM_COLSPACE_BITSIZEOF( N ) \
	( ( ( OAM_COLSPACE_GET_CHTYPE( N ) == 0 ? 1 : 3 ) + \
		  ( OAM_COLSPACE_GET_ALPHA( N ) ? 1 : 0 ) ) * \
		( 1 << OAM_COLSPACE_GET_BPC( N ) ) )
#define OAM_COLSPACE_SIZEOF( N ) \
	( ( OAM_COLSPACE_BITSIZEOF( N ) >> 3 ) << 3 == \
				OAM_COLSPACE_BITSIZEOF( N ) \
			? OAM_COLSPACE_BITSIZEOF( N ) >> 3 \
			: ( ( OAM_COLSPACE_BITSIZEOF( N ) >> 3 ) + 1 ) )

/**
 * Colour space bitfield
 *
 * ┌─────── Channel type (bitenum)
 * │  ┌──── Alpha channel sentinel
 * │  │┌─── Bits per channel, in 2ⁿ (up to 128 bits/channel)
 * │  ││  ┌ Palette sentinel (hints at palette use)
 * │  ││  │
 * aaabcccd
 * 76543210
 * 7......0
 *
 * bitenum channel types:
 *  - 000 := Grayscale (1 channel)
 *  - 001 := RGB (3 channels)
 *  - 010 := Y’UV (3 channels)
 *  - 011 := CMY (3 channels)
 *  - 100 := HSV (3 channels)
 *  - 101 := HSL (3 channels)
 *  - 110 := [reserved]
 *  - 111 := [reserved]
 */

enum
{
	OAM_COLSPACE_CHTYPE_GRAY = 0,
	OAM_COLSPACE_CHTYPE_RGB,
	OAM_COLSPACE_CHTYPE_YUV,
	OAM_COLSPACE_CHTYPE_CMY,
	OAM_COLSPACE_CHTYPE_HSV,
	OAM_COLSPACE_CHTYPE_HSL,
	OAM_COLSPACE_CHTYPE_RESERVED1,
	OAM_COLSPACE_CHTYPE_RESERVED2,
	OAM_MAX_COLSPACE_CHTYPE
};

typedef u8 oam_colspace_t;

UNI_DECL_OPT( oam_colspace_t );

#endif /* INC_API__OAM_COLSPACE_H */
