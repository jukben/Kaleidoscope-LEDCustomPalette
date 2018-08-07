/* -*- mode: c++ -*-
 * Kaleidoscope-LEDCustomPalette
 * Copyright (C) 2018  Jakub Beneš
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
 */

#include "LEDCustomPalette.h"

namespace kaleidoscope
{

uint16_t LEDCustomPalette::map_base_;

void LEDCustomPalette::setup(void)
{
    map_base_ = ::LEDPaletteTheme.reserveThemes(1);
}

void LEDCustomPalette::update(void)
{
    ::LEDPaletteTheme.updateHandler(map_base_, 0);
}

bool LEDCustomPalette::focusHook(const char *command)
{
    return ::LEDPaletteTheme.themeFocusHandler(command, PSTR("lcp.map"), map_base_, 1);
}

} // namespace kaleidoscope

kaleidoscope::LEDCustomPalette LEDCustomPalette;
