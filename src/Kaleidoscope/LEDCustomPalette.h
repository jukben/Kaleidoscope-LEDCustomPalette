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

#pragma once

#include "Kaleidoscope-LEDControl.h"
#include "Kaleidoscope-LED-Palette-Theme.h"

namespace kaleidoscope
{

class LEDCustomPalette : public LEDMode
{
  public:
    LEDCustomPalette(void) {}
    static bool focusHook(const char *command);

  protected:
    void setup(void) final;
    void update(void) final;

  private:
    static uint16_t map_base_;
};

} // namespace kaleidoscope

extern kaleidoscope::LEDCustomPalette LEDCustomPalette;

#define FOCUS_HOOK_LCP FOCUS_HOOK(LEDCustomPalette.focusHook, "lcp.map")
