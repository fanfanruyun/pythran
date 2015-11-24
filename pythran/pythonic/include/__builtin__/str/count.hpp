#ifndef PYTHONIC_INCLUDE_BUILTIN_STR_COUNT_HPP
#define PYTHONIC_INCLUDE_BUILTIN_STR_COUNT_HPP

#include "pythonic/include/__dispatch__/count.hpp"
#include "pythonic/include/utils/functor.hpp"

namespace pythonic
{
  namespace __builtin__
  {
    namespace str
    {
      USING_FUNCTOR(count, pythonic::__dispatch__::functor::count);
    }
  }
}
#endif
