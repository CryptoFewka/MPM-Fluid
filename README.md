# MPM Fluid Simulation

The MIT License (MIT) - Copyright (c) 2010 respective contributors

## About

MPM (Material Point Method) fluid simulation demo with multiple platform implementations.

- **OpenFrameworks** version by [Golan Levin](http://www.flong.com)
- **ofxAddon** created by [James George](http://www.jamesgeorge.org) (@obviousjm)
- **Original Java version**: http://grantkot.com/MPM/Liquid.html
- **Flash version** by iunpin: http://wonderfl.net/c/6eu4
- **Javascript version** by [Stephen Sinclair](http://www.music.mcgill.ca/~sinclair) (radarsat1)

## Implementations

### OpenFrameworks (`src/`)

Requires [ofxControlPanel](https://github.com/kylemcdonald/ofxControlPanel).

### Processing (`example-processing/`)

Standalone Processing sketch.

### Mobile Web (`example-mobile/`)

A full-featured mobile web version that runs in the browser with device sensor support. Deployed via GitHub Pages.

**Sensor-driven interaction:**
- Tilt your device to change gravity direction — fluid flows naturally with your phone's orientation
- Shake your device to apply a force burst to the particles
- Touch and drag to push fluid around the screen

**Particle rendering:**
- Particles are rendered as filled circles with velocity-based color mapping
- Multiple color palettes: ocean (blue-cyan-green-yellow), desert (brown-orange-gold), and static shades
- Full brightness mode for uniform high-visibility colors

**Controls:**
- **Color** — cycle through velocity, static, and desert color modes
- **Bright** — toggle between velocity-dimmed and full brightness rendering
- **Spawn** — inject new particle sets (up to 3 additional batches), each with distinct mass and color palette so lighter particles float and heavier ones sink
- **Reset** — return to the initial simulation state

**Other features:**
- On-screen HUD showing FPS, particle count, and sensor status
- Gravity direction indicator in the top-right corner
- Responsive full-screen canvas with device pixel ratio support
- HTTPS required for sensor access on mobile browsers

## License

MIT License — see source files for details.
