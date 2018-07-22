# psx

The aim of this project is to facilitate an understanding of the inner workings of the Diablo 1 game engine, as based on the debug information of the Japanese release of Diablo 1 on Playstation 1.

## Directory structure

**Note**, the `psx` repository contains the debug information recovered from `DIABPSX.SYM` in two formats, firstly as original source files, and secondly as overlays.

The debug information split into original source files.

* `funcs`: function declarations
	- `funcs/source/items.cpp` contains function declarations related to item handling.
* `globals`: global variable declarations
	- `globals/global_c.cpp` contains the global variables of the overlay with ID `$c`

The debug information split into overlays.

* `overlays`: function and global variable declarations
	- 	`overlays/overlay_c.h` contains the functions and global variables of the overlay with ID `$c`

### Overlays

* Overlay ID `$b`: `FRONTEND.BIN`
* Overlay ID `$c`: `PREGAME.BIN`
* Overlay ID `$d`: `GAME.BIN`
* Overlay ID `$e`: `FMV.BIN`

## sym_dump

The information contained within this repository has been recovered by parsing the `DIABPSX.SYM` file contained on the Japanese release of Diablo 1 on Playstation 1 (SLPS-01416) using the [sym_dump](https://github.com/sanctuary/sym) tool.
