/*
	This file is part of libswirl
*/
#include "license/bsd"


/*
**	naomi_regs.h
*/

#pragma once

enum
{
	NAOMI_ROM_OFFSETH_addr		= 0x5f7000,
	NAOMI_ROM_OFFSETL_addr		= 0x5f7004,
	NAOMI_ROM_DATA_addr			= 0x5f7008,
	NAOMI_DMA_OFFSETH_addr		= 0x5f700C,
	NAOMI_DMA_OFFSETL_addr		= 0x5f7010,
	NAOMI_DMA_COUNT_addr		= 0x5f7014,
	NAOMI_BOARDID_WRITE_addr	= 0x5F7078,
	NAOMI_BOARDID_READ_addr		= 0x5F707C,
	NAOMI_COMM_OFFSET_addr		= 0x5F7050,
	NAOMI_COMM_DATA_addr		= 0x5F7054,
};
