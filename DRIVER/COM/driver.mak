#***************************  M a k e f i l e  *******************************
#  
#         Author: ds
#  
#    Description: Makefile definitions for the D302 BBIS driver
#                      
#-----------------------------------------------------------------------------
#   Copyright (c) 2001-2019, MEN Mikro Elektronik GmbH
#*****************************************************************************
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.


MAK_NAME=d302
# the next line is updated during the MDIS installation
STAMPED_REVISION="mdis_drivers_bbis_d302_com_01_42-0-gf1f51e0-dirty_2019-02-21"

DEF_REVISION=MAK_REVISION=$(STAMPED_REVISION)

MAK_SWITCH=$(SW_PREFIX)MAC_MEM_MAPPED \
		$(SW_PREFIX)$(DEF_REVISION) \
		   $(SW_PREFIX)D302_VARIANT=D302
		    	 	 
MAK_LIBS=$(LIB_PREFIX)$(MEN_LIB_DIR)/desc$(LIB_SUFFIX)	\
         $(LIB_PREFIX)$(MEN_LIB_DIR)/oss$(LIB_SUFFIX)	\
	 	 $(LIB_PREFIX)$(MEN_LIB_DIR)/dbg$(LIB_SUFFIX)

MAK_INCL=$(MEN_INC_DIR)/bb_d302.h	\
		 $(MEN_INC_DIR)/bb_defs.h	\
		 $(MEN_INC_DIR)/bb_entry.h	\
		 $(MEN_MOD_DIR)/brd.h		\
		 $(MEN_MOD_DIR)/d302_int.h	\
		 $(MEN_INC_DIR)/dbg.h		\
		 $(MEN_INC_DIR)/desc.h		\
		 $(MEN_INC_DIR)/maccess.h	\
		 $(MEN_INC_DIR)/mdis_api.h	\
		 $(MEN_INC_DIR)/mdis_com.h	\
		 $(MEN_INC_DIR)/mdis_err.h	\
         $(MEN_INC_DIR)/men_typs.h	\
         $(MEN_INC_DIR)/oss.h

MAK_INP1=bb_d302$(INP_SUFFIX)

MAK_INP=$(MAK_INP1)

