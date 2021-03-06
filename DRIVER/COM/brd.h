/***********************  I n c l u d e  -  F i l e  ************************
 *
 *         Name: brd.h
 *
 *       Author: ds
 *
 *  Description: Internal header file for board specific defines
 *
 *     Switches: ---
 *
 *
 *---------------------------------------------------------------------------
 * Copyright 2001-2019, MEN Mikro Elektronik GmbH
 ******************************************************************************/
/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _BRD_H
#define _BRD_H

#ifdef __cplusplus
    extern "C" {
#endif

#define D302		0
#define D302_SW		1
/*-----------------------------------------+
|  D302                                    |
+-----------------------------------------*/
#if D302_VARIANT==D302
#	define BBNAME					"D302"			/* board function prefix			*/
#	define BRD_BUSTYPE				OSS_BUSTYPE_PCI	/* board bus type PCI				*/
#	define BRD_PCI_VEN_ID			D302_PCI_VEN_ID	/* pci vendor-id					*/
#	define BRD_PCI_DEV_ID			D302_PCI_DEV_ID	/* pci device-id					*/
#	define BRD_MODULE_NBR			4				/* number of devices				*/
#	define BRD_MBASE_OFFSET(m)		((m)*0x200 )	/* offset to module base addr		*/
#	define BRD_MODULE_SIZE			0x100			/* size of module space				*/
#	define BRD_CTRLR_OFFSET			0x104			/* offset to ctrl/status registers	*/
#	define BRD_CTRL_SIZE			0x4				/* size of ctrl/status registers	*/
#elif D302_VARIANT==D302_SW
#	define BBNAME					"D302"			/* board function prefix			*/
#	define BRD_BUSTYPE				OSS_BUSTYPE_PCI	/* board bus type PCI				*/
#	define BRD_PCI_VEN_ID			D302_PCI_VEN_ID	/* pci vendor-id					*/
#	define BRD_PCI_DEV_ID			D302_PCI_DEV_ID	/* pci device-id					*/
#	define BRD_MODULE_NBR			4				/* number of devices				*/
#	define BRD_MBASE_OFFSET(m)		((m)*0x200 )	/* offset to module base addr		*/
#	define BRD_MODULE_SIZE			0x100			/* size of module space				*/
#	define BRD_CTRLR_OFFSET			0x104			/* offset to ctrl/status registers	*/
#	define BRD_CTRL_SIZE			0x4				/* size of ctrl/status registers	*/
#endif

#ifdef __cplusplus
    }
#endif

#endif /* _BRD_H */
