# Kaleidoscope-LEDCustomPalette

This is mandatory dependence (part of the setup) for using [LED Custom Palette GUI](https://github.com/jukben/keyboardio-led-custom-palette) 🎨

## Installing this plugin

Follow this [guide](https://github.com/keyboardio/Kaleidoscope/wiki/Installing-Plugins#installing-third-party-plugins)

### Setup

```c++
#include "Kaleidoscope.h"
#include "Kaleidoscope-Focus.h"
#include "Kaleidoscope-EEPROM-Settings.h"
#include "Kaleidoscope-LED-Palette-Theme.h"
#include "Kaleidoscope-LEDCustomPalette.h"

KALEIDOSCOPE_INIT_PLUGINS(
    LEDControl,
    Focus,
    EEPROMSettings,
    LEDPaletteTheme,
    LEDCustomPalette);

void setup()
{
  Kaleidoscope.setup();
  Focus.addHook(FOCUS_HOOK_LEDPALETTETHEME);
  Focus.addHook(FOCUS_HOOK_LCP);
}

void loop()
{
  Kaleidoscope.loop();
}
```

## Dependencies

- [Kaleidoscope-EEPROM-Settings](https://github.com/keyboardio/Kaleidoscope-EEPROM-Settings)
- [Kaleidoscope-Focus](https://github.com/keyboardio/Kaleidoscope-Focus)
- [Kaleidoscope-LEDControl](https://github.com/keyboardio/Kaleidoscope-LEDControl)
- [Kaleidoscope-LED-Palette-Theme](https://github.com/keyboardio/Kaleidoscope-LED-Palette-Theme/blob/master/README.md)

## Further reading

The [example][plugin:example] is a working sketch using LEDCustomPalette.

[plugin:example]: https://github.com/cdisselkoen/Kaleidoscope-MacrosOnTheFly/blob/master/examples/MacrosOnTheFly/MacrosOnTheFly.ino

## Thanks

Thanks to @cdisselkoen - [Kaleidoscope-MacrosOnTheFly](https://github.com/cdisselkoen/Kaleidoscope-MacrosOnTheFly), I've used your repository as inspiration for a Readme. 🙌
