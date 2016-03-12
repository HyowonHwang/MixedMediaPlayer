#ifndef _MACRO_MACRO_H_
#define _MACRO_MACRO_H_

#define MAKE_NONCOPYABLE(classname) \
  classname(classname&); \
  classname& operator=(classname&);

#endif //_MACRO_MACRO_H_
