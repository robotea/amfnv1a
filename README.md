# AMFNV1a - constexpr implementation of FNV1a hash algorithm

There are two variants, 32 and 64 bit. If parameter string is an *constexpr* expression, result is also *constexpr* expression.

## Usage

Let's have switch statement by text...

    #include <iostream>
    #include "amfnv1a/AMCEFNV1a.h"

    using namespace std;

    cout << "Enter password (color of blood): ";
   	char pass[1024];
   	cin >> pass;
   	uint64_t hash = AMFNV1aAlgorithm::fnv1a64(pass);

   	switch (hash)
   	{
       	case AMCEFNV1aAlgorithm::fnv1a64("blue"): cout<<"Fail"<<endl; break;
       	case AMCEFNV1aAlgorithm::fnv1a64("green"): cout<<"Fail"<<endl; break;
       	case AMCEFNV1aAlgorithm::fnv1a64("red"): cout<<"Hooray!"<<endl; break;
       	case AMCEFNV1aAlgorithm::fnv1a64("yellow"): cout<<"Fail"<<endl; break;
       	default: cout<<"Fail"<<endl;
   	}

## Documetation

There are doxygen generated documentation [here on andromeda.robotea.com](http://andromeda.robotea.com/amfnv1a/latest/).

## Building AMFNV1a

### Getting sources

```bash
git submodule update
```

### Compiling

```bash

mkdir cmake-build-debug

cd cmake-build-debug

cmake ..

make
```

### Single test (not necessary)

```bash
./TEST_AMFNV1a
```

## License

This library is under MIT license.

## Contribute

Please contact [me](mailto:zdenek.skulinek\@robotea.com\?subject\=Contribute%20for%20AMFNV1a).

## Ask for help

Please contact [me](mailto:zdenek.skulinek\@robotea.com\?subject\=Consultation).

## Dependencies

1. [Google test](https://github.com/google/googletest.git)
