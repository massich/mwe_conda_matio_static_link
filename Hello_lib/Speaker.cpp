#include "Speaker.h"

#include <iomanip>
#include <sstream>

#include <matio.h>

using namespace Hello;

namespace Hello {
  void Speaker::sayHello() {
      int major, minor, release;
      Mat_GetLibraryVersion(&major, &minor, &release);
      std::cout << "Hello, world! Using MATIO " << major << "." << minor << "." << release << std::endl;
      std::cout << "Hello, world! MAT_FT_MAT73 is " << mat_ft::MAT_FT_MAT73 << std::endl;
  }
}
