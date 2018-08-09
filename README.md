# Kaleidoscope-LEDCustomPalette

This is mandatory dependence (part of the setup) for using [LED Custom Palette GUI](https://github.com/jukben/keyboardio-led-custom-palette) 🎨

> This plugin si deprecated! It's required only for LED Custom Palette 1.0.1. The version 1.2.0 support configuration per layer of your keyboard and is using pre-installed [Kaleidoscope-Colormap](https://github.com/keyboardio/Kaleidoscope-Colormap).

## Installing this plugin

_This part of Readme was borrowed from [Kaleidoscope-MacrosOnTheFly](https://github.com/cdisselkoen/Kaleidoscope-MacrosOnTheFly) 😅_

Install this plugin as you would any other 3rd-party plugin. Specifically:

1.  **Find your plugin directory.** This is wherever you normally put plugins; it
    should be `$SKETCHBOOK_DIR/hardware/keyboardio/avr/libraries`, or at least
    accessible from there via symlink. (If you don't know what a symlink is, don't
    worry - just use the `libraries` directory directly.) `$SKETCHBOOK_DIR` is your
    Arduino sketchbook directory, perhaps `$HOME/Arduino` or `$HOME/Documents/Arduino`.
2.  **Install this plugin into your plugin directory** using one of the below options.

- **(Option 1 - using Git)** Clone this Git repo into your plugin directory. This can
  be done from the command line - just navigate to your plugin directory and type
  `git clone https://github.com/cdisselkoen/Kaleidoscope-MacrosOnTheFly`.
- **(Option 2 - no Git or command-line required)** Click the green "Clone or download"
  button at the top right of this page, and select "Download ZIP". Then, unzip the
  folder in your plugin directory.

You're done! It was that easy.

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
