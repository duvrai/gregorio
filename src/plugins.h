/*
 * Gregorio format support headers.
 *
 * Copyright (C) 2008-2015 The Gregorio Project (see CONTRIBUTORS.md)
 * 
 * This file is part of Gregorio.
 *
 * Gregorio is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Gregorio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Gregorio.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PLUGINS_H
#define PLUGINS_H

void dump_write_score(FILE *f, gregorio_score *score);

gregorio_score *gabc_read_score(FILE *f_in);
void gabc_write_score(FILE *f, gregorio_score *score);

void gregoriotex_write_score(FILE *f, gregorio_score *score);

void opustex_write_score(FILE *f, gregorio_score *score);

gregorio_score *xml_read_score(FILE *f);
void xml_write_score(FILE *f, gregorio_score *score);

#endif
