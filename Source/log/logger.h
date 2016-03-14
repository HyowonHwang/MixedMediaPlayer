#ifndef _LOG_LOGGER_H_
#define _LOG_LOGGER_H_

#include <iostream>
#include <sstream>

namespace mmp {

const int LOG_NORMAL = 0;
const int LOG_WARNING = 1;
const int LOG_ERROR = 2;
const int LOG_FATAL = 3;
const int LOG_MAX_LEVEL = 4;

#define MMP_LOG(level) \
  (Logger(level, false, __FILE__, __LINE__).message())

namespace log {

class Logger {
  public:
    Logger(int level, bool ignore, const char* file, const int line);
    ~Logger();

    inline Logger& message() {
      return *this;
    }

    template<typename T>
    Logger& operator<<(T t) {
      if (!ignore_) std::cerr << t;
      return *this;
    }

  private:
    int level_;
    bool ignore_;
    static int global_level_;
};

} //namespace log 
} //namespace mmp 
#define MMPLOG(level) 
#endif //_LOG_LOGGER_H_
