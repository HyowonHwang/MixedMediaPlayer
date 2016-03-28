#ifndef _MACRO_MACRO_H_
#define _MACRO_MACRO_H_

#include <stdint.h>

#define MAKE_NONCOPYABLE(classname) \
  classname(classname&); \
  classname& operator=(classname&);

#define MAKE_FOURCCTYPE(ch0, ch1, ch2, ch3) \
  (uint32_t)(int8_t)(ch3) | ((uint32_t)(int8_t)(ch2) << 8) | \
  ((uint32_t)(int8_t)(ch1) << 16) | ((uint32_t)(int8_t)(ch0) << 24)

#endif //_MACRO_MACRO_H_
