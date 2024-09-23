/**
 * @mainpage Andromeda Exception library
 * @brief AMFNV1a - constexpr implementation of FNV1a hash algorithm
 *
 * There are two variants, 32 and 64 bit. If parameter string is an *constexpr* expression, result is also *constexpr* expression.
 * Usage
 * =====
 * Let's have this table. First word is an original string, second is a "translated" string.
 *
 *	@code{.cpp}
 *  #include "amfnv1a/AMCEFNV1a.h"
 *  #include <iostream>
 *
 *  using namespace AMCore;
 *  using namespace std;
 *
 *  int main() {
 *    	cout<<"Enter password (color of blood): ";
 *    	char pass[1024];
 *    	cin>>pass;
 *    	uint64_t hash = AMFNV1aAlgorithm::fnv1a64(pass);
 *
 *    	switch (hash)
 *    	{
 *        	case AMCEFNV1aAlgorithm::fnv1a64("blue"): cout<<"Fail"<<endl;break;
 *        	case AMCEFNV1aAlgorithm::fnv1a64("green"): cout<<"Fail"<<endl;break;
 *        	case AMCEFNV1aAlgorithm::fnv1a64("red"): cout<<"Hooray!"<<endl;break;
 *        	case AMCEFNV1aAlgorithm::fnv1a64("yellow"): cout<<"Fail"<<endl;break;
 *        	default: cout<<"Fail"<<endl;
 *    	}
 *    	return 0;
 *	}
 *  @endcode
 *
 * Sources
 * =======
 *
 * Download at [GitHUB](https://github.com/robotea/amfnv1a)
 *
 * Building AMFNV1a
 * ==================
 *
 * Getting sources
 * ---------------
 *
 * \code
 * git submodule update
 * \endcode
 *
 * Compiling
 * ---------
 *
 * \code
 *
 * mkdir cmake-build-debug
 *
 * cd cmake-build-debug
 *
 * cmake ..
 *
 * make
 *
 * \endcode
 *
 * Single test (not necessary)
 * ---------------------------
 *
 * \code
 *
 * ./TEST_AMExeption
 *
 * \endcode
 *
 * Licencing
 * =========
 *
 * This library is under GNU GPL v3 license. If you need business license, don't hesitate to contact [me](mailto:zdenek.skulinek@robotea.com?subject=License for AMFNV1a).
 *
 * Contribute
 * ==========
 *
 * Please contact [me](mailto:zdenek.skulinek@robotea.com?subject=License for AMFNV1a).
 *
 * Dependencies
 * ============
 *
 * - [Google test](https://github.com/google/googletest.git)
 * - [AMLString](https://github.com/robotea/amlstring.git)
 */
