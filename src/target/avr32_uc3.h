/* SPDX-License-Identifier: GPL-2.0-or-later */

/***************************************************************************
 *   Copyright (C) 2010 by Oleksandr Tymoshenko <gonzo@bluezbox.com>       *
 ***************************************************************************/

#ifndef OPENOCD_TARGET_AVR32_UC3_H
#define OPENOCD_TARGET_AVR32_UC3_H

struct target;

#define UC3_COMMON_MAGIC	0x4150374bU

struct avr32_uc3_common {
	unsigned int common_magic;

	struct avr32_jtag jtag;
	struct reg_cache *core_cache;
	uint32_t core_regs[AVR32NUMCOREREGS];
};

static inline struct avr32_uc3_common *
target_to_uc3(struct target *target)
{
	return (struct avr32_uc3_common *)target->arch_info;
}

struct avr32_core_reg {
	uint32_t num;
	struct target *target;
	struct avr32_uc3_common *avr32_common;
};



#endif /* OPENOCD_TARGET_AVR32_AP7K_H */
