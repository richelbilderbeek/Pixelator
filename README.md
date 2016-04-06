# Pixelator

[![Travis CI logo](TravisCI.png)](https://travis-ci.org)
![Whitespace](Whitespace.png)
[![gplv3](http://www.gnu.org/graphics/gplv3-88x31.png)](http://www.gnu.org/licenses/gpl.html)

[![Build Status](https://travis-ci.org/richelbilderbeek/Pixelator.svg?branch=master)](https://travis-ci.org/richelbilderbeek/Pixelator)

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


