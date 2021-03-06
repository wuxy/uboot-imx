/*
 *  Copyright (C) 2015 Freescale Semiconductor, Inc
 *  Peng Fan <Peng.Fan@freescale.com>
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */
#ifndef __PFUZE300_PMIC_H_
#define __PFUZE300_PMIC_H_

/* PFUZE300 registers */
enum {
	PFUZE300_DEVICEID	= 0x00,

	PFUZE300_REVID		= 0x03,
	PFUZE300_FABID		= 0x04,
	PFUZE300_INTSTAT0	= 0x05,
	PFUZE300_INTMASK0	= 0x06,
	PFUZE300_INTSENSE0	= 0x07,
	PFUZE300_INTSTAT1	= 0x08,
	PFUZE300_INTMASK1	= 0x09,
	PFUZE300_INTSENSE1	= 0x0A,

	PFUZE300_INTSTAT3	= 0x0E,
	PFUZE300_INTMASK3	= 0x0F,
	PFUZE300_INTSENSE3	= 0x10,
	PFUZE300_INTSTAT4	= 0x11,
	PFUZE300_INTMASK4	= 0x12,
	PFUZE300_INTSENSE4	= 0x13,

	PFUZE300_COINCTL	= 0x1A,
	PFUZE300_PWRCTL		= 0x1B,
	PFUZE300_MEMA		= 0x1C,
	PFUZE300_MEMB		= 0x1D,
	PFUZE300_MEMC		= 0x1E,
	PFUZE300_MEMD		= 0x1F,

	PFUZE300_SW1AVOLT	= 0x20,
	PFUZE300_SW1ASTBY	= 0x21,
	PFUZE300_SW1AOFF	= 0x22,
	PFUZE300_SW1AMODE	= 0x23,
	PFUZE300_SW1ACONF	= 0x24,

	PFUZE300_SW1BVOLT	= 0x2E,
	PFUZE300_SW1BSTBY	= 0x2F,
	PFUZE300_SW1BOFF	= 0x30,
	PFUZE300_SW1BMODE	= 0x31,
	PFUZE300_SW1BCONF	= 0x32,

	PFUZE300_SW2VOLT	= 0x35,
	PFUZE300_SW2STBY	= 0x36,
	PFUZE300_SW2OFF		= 0x37,
	PFUZE300_SW2MODE	= 0x38,
	PFUZE300_SW2CONF	= 0x39,

	PFUZE300_SW3VOLT	= 0x3C,
	PFUZE300_SW3STBY	= 0x3D,
	PFUZE300_SW3OFF		= 0x3E,
	PFUZE300_SW3MODE	= 0x3F,
	PFUZE300_SW3CONF	= 0x40,

	PFUZE300_SWBSTCTL	= 0x66,

	PFUZE300_LDOGCTL	= 0x69,
	PFUZE300_VREFDDRCTL	= 0x6A,
	PFUZE300_VSNVSCTL	= 0x6B,
	PFUZE300_VLDO1CTL	= 0x6C,
	PFUZE300_VLDO2CTL	= 0x6D,
	PFUZE300_VCC_SDCTL	= 0x6E,
	PFUZE300_V33CTL		= 0x6F,
	PFUZE300_VLDO3CTL	= 0x70,
	PFUZE300_VLD4CTL	= 0x71,

	PMIC_NUM_OF_REGS	= 0x7F,
};

#define PFUZE300_SW1AB_SETP(x) ((x - 700) / 25)

int power_pfuze300_init(unsigned char bus);

#endif
