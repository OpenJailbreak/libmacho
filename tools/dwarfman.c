/**
 * libmacho-1.0 - dwarfman.c
 * Copyright (C) 2013 Crippy-Dev Team
 * Copyright (C) 2010-2013 Joshua Hill
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

#define _DEBUG 1
#include <stdio.h>
#include <libmacho-1.0/macho.h>
#include <libmacho-1.0/section.h>

int main(int argc, char* argv[]) {
	if(argc != 2) {
		printf("usage: ./dwarfman <mach-o>\n");
		return 0;
	}
	char* exec = argv[1];
	macho_t* macho = macho_open(exec);
	if(macho) {
		macho_debug(macho);
		printf("Getting __DWARF segment\n");
		macho_section_t* dwarf_abbrev = macho_get_section(macho, "__DWARF", "__debug_abbrev");
		if(dwarf_abbrev) {
			printf("Found DWARF debug_abbrev section at 0x%08x and is 0x%08x bytes long\n", dwarf_abbrev->info->offset, dwarf_abbrev->info->size);
			macho_section_free(dwarf_abbrev);
		}
		macho_free(macho);
	}
	return 0;
}
