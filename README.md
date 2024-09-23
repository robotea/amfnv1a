# AMFNV1a - constexpr implementation of FNV1a hash algorithm

There are two variants, 32 and 64 bit. If parameter string is an *constexpr* expression, result is also *constexpr* expression.

## Usage

Let's have switch statement by text...

    #include "amfnv1a/AMCEFNV1a.h"

    cout << "Enter password (color of blood): ";
   	char pass[1024];
   	cin >> pass;
   	uint64_t hash = AMFNV1aAlgorithm::fnv1a64(pass);

   	switch (hash)
   	{
       	case AMCEFNV1aAlgorithm::fnv1a64("blue"): cout<<"Fail"<<endl;break;
       	case AMCEFNV1aAlgorithm::fnv1a64("green"): cout<<"Fail"<<endl;break;
       	case AMCEFNV1aAlgorithm::fnv1a64("red"): cout<<"Hooray!"<<endl;break;
       	case AMCEFNV1aAlgorithm::fnv1a64("yellow"): cout<<"Fail"<<endl;break;
       	default: cout<<"Fail"<<endl;
   	}

## Documetation

There are doxygen generated documentation [here on libandromeda.org](http://libandromeda.org/amfnv1a/latest/).

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

This library is under GNU GPL v3 license. If you need business license, don't hesitate to contact [me](mailto:zdenek.skulinek\@robotea.com\?subject\=License%20for%20AMFNV1a).

## Contribute

Please contact [me](mailto:zdenek.skulinek\@robotea.com\?subject\=License%20for%20AMFNV1a).

## Dependencies

1. [Google test](https://github.com/google/googletest.git)