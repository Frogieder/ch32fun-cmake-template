# Template project for ch32fun with CMake

This repository contrains minimum working setup for cnlohn's ch32fun CMake, which is well-suited for use with CLion.
By default, it's configured to work CH32V003, but you can change the chip by modifing the `CMakeLists.txt` and `include/funconfig.h`.
It has been tested on Linux to work with CH32V003 and CH32V003, but it should work with other chips too, sice it was made based on the Makefile from ch32fun.

## First use
Start by following the setup in [ch32fun wiki/Installation](https://github.com/cnlohr/ch32fun/wiki/Installation)
Clone this repository with
```sh
git clone https://github.com/Frogieder/ch32fun-cmake-template
cd CH32V003-template
git submodule update --init --recursive
```

On Linux (and on Mac too, I think), if you want to flash the chip using minichlink (which I do recommend), you'll also have to run the following commands:
```sh
cd cd ch32fun/minichlink
make
```

### Build and flash
```sh
mkdir build
cd build
cmake ..
make flash
```
If you don't want to flash the chip, just write `make` instead of `make flash`
