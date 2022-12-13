# Dethrace - sandbox fork

[![Workflow](https://github.com/jeff-1amstudios/dethrace/actions/workflows/workflow.yml/badge.svg)](https://github.com/jeff-1amstudios/dethrace/actions/workflows/workflow.yml)
[![Twitter](https://badgen.net/badge/icon/twitter?icon=twitter&label)](https://twitter.com/dethrace_labs)
[![Discord Carmageddon server](https://badgen.net/badge/icon/discord?icon=discord&label)](https://discord.gg/f5StsuP)

Want to chat? We are in the `#dethrace` channel on the Carmageddon discord server.

Dethrace is an attempt to learn how the 1997 driving/mayhem game [Carmageddon](https://en.wikipedia.org/wiki/Carmageddon) works behind the scenes and rebuild it to run natively on modern systems.


### About the fork

This fork adds extra customization to the game through the executable arguments:

- `-metric`: displays car's speed in game in kilometers per hour.
- `-endlessmode`: race doesn't when peds or opponents are murdered.
- `-showpeds`: shows peds on map. Also shows ped respawn (white), ped on map (green) and electro bastard ray (blue) pups.
- `-showpups`: shows all powerups on map (red dots).
- `-extratime`: overrides starting time for races to 1 hour.
- `-longerpups`: doubles the duration of all powerups.
- `-stellaisdud`: disables built-in electro bastard ray on Stella Stuna's car.
- `-playeriselectric`: grants electro bastard ray to player's car.
- `-playerisstoned`: grants solid granite car effect to player's car.
- `-playerisjelly`: grants jelly suspension effect to player's car.


## Game content

Dethrace does not ship with any game content. You'll need access to the data from the original game. If you don't have an original CD then you can [buy Carmageddon from GoG.com](https://www.gog.com/game/carmageddon_max_pack).

`dethrace` also supports the various freeware demos:
- [Original Carmageddon demo](https://rr2000.cwaboard.co.uk/R4/PC/carmdemo.zip)
- [Splat Pack demo](https://rr2000.cwaboard.co.uk/R4/PC/splatdem.zip)
- [Splat Pack Xmas demo](https://rr2000.cwaboard.co.uk/R4/PC/Splatpack_christmas_demo.zip)

Lots of other fun things are available from the [Road Reaction site](https://rr2000.cwaboard.co.uk/pc-files#c1)


## Dependencies

### SDL2

The easiest way to install SDL is via your favorite package manager.

OSX:
```sh
brew install SDL2
```

Linux:
```sh
apt-get install libsdl2-dev
```

 

Point Dethrace at the Carmageddon install directory:
```sh
export DETHRACE_ROOT_DIR=/path/to/carmageddon
```

## Build

Dethrace uses [cmake](https://cmake.org/) for generating build files.

To generate the build files (generally only required once):
```sh
mkdir build
cd build
cmake ..
```

On cmake has generated the build files for your platform, run the build. For example:
```sh
make
```

### Run

After building, `build/dethrace` is created

```sh
./dethrace [args]
```


## Run tests

A subset of tests do not require `DETHRACE_ROOT_DIR`. They run via Github actions when code is committed to this repo. This allows us to keep nice and clean and avoid storing any potentially legally problematic resouces in our repo.

The majority of tests _do_ require `DETHRACE_ROOT_DIR`. 

To run the full test suite, you must have a copy of the original *Splat Pack* data.

```sh
export DETHRACE_ROOT_DIR=/path/to/carmageddon_splat_pack
```

To run 

```sh
./dethrace_test
```

To run a single test
```sh
DETHRACE_TEST_ARGS="-n test_name" make test
```

## Changelog
[From the beginning until release](docs/CHANGELOG.md)

## Credits
- CrayzKirk (manually matching up functions and data structures in the executable to the debugging symbols)
- The developer at Stainless Software who left an old debugging .SYM file on the Splat Pack CD ;)

## Legal
Dethrace is released to the Public Domain. The documentation and function provided by Dethrace may only be utilized with assets provided by ownership of Carmageddon.

The source code in this repository is for non-commerical use only. If you use the source code you may not charge others for access to it or any derivative work thereof.

Dethrace and any of its' maintainers are in no way associated with or endorsed by SCi, Stainless Software or THQ Nordic.
