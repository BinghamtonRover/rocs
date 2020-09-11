# Installation
This procedure only needs to be performed initially or whenever there is an update to rocs.
1. Either `git clone` or download and extract a zip file of this repository to `<your arduino sketch dir>/libraries/rocs`. On my machine, for example, the arduino sketch dir is `~/Arduino`, so I would put this repository in `~/Arduino/libraries/rocs/`, and I would expect to see files like `~/Arduino/libraries/rocs/rocs.cpp`, etc.
2. Open or restart the Arduino IDE. Confirm that rocs was installed correctly by looking at the `File > Examples` menu: you should see a `rocs` submenu listed under `Examples from Custom Libraries`.

# Use
This procedure only needs to be performed once per sketch.
1. Once the library is installed, it can be included in the current sketch by navigating to the `Sketch > Include Library` menu and selecting `rocs` from the list under `Contributed libraries`.
2. Make sure to add `#include <rocs.hpp>` to the top of your sketch code in order to use the library.
3. See the bundled example (can be found in the Arduino examples menu as explained in the Installation section) for usage instructions.
