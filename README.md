# Pixelator

Branch|[![Travis CI logo](TravisCI.png)](https://travis-ci.org)|[![Codecov logo](Codecov.png)](https://www.codecov.io)
---|---|---
master|[![Build Status](https://travis-ci.org/richelbilderbeek/Pixelator.svg?branch=master)](https://travis-ci.org/richelbilderbeek/Pixelator)|[![codecov.io](https://codecov.io/github/richelbilderbeek/Pixelator/coverage.svg?branch=master)](https://codecov.io/github/richelbilderbeek/Pixelator/branch/master)
develop|[![Build Status](https://travis-ci.org/richelbilderbeek/Pixelator.svg?branch=develop)](https://travis-ci.org/richelbilderbeek/Pixelator)|[![codecov.io](https://codecov.io/github/richelbilderbeek/Pixelator/coverage.svg?branch=develop)](https://codecov.io/github/richelbilderbeek/Pixelator/branch/develop)

C++ tool to create a pixelated effect using Qt.

![Menu v3.0](Screenshots/PixelatorMenu_3_0.png)

![Main screen v3.0](Screenshots/Pixelator_3_0.png)

## Getting this to run

### Download this project

```
git clone https://github.com/richelbilderbeek/Pixelator
```

This will create a folder called `Pixelator`.

### Build this project

### Go into the folder created

```
cd Pixelator
```

### Install the other GitHubs needed

```
download_other_githubs.sh
```

This will create folders *next* to `Pixelator`, that is, in the same folder that you've downloaded `Pixelator`.

### Building the console version

On GNU/Linux, you can call the bash build script:

```
./build_console.sh
```

You can now run the executable created.

Or you can open the Qt Creator project file `PixelatorConsole.pro` and click `Run`.

### Building the desktop version

On GNU/Linux, you can call the bash build script:

```
./build_desktop.sh
```

Or you can open the Qt Creator project file `PixelatorDesktop.pro` and click `Run`.


