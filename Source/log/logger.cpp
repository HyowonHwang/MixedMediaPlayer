#include <string.h> 
#include <stdint.h>
#include <stdlib.h>

#include "log/logger.h"

namespace mmp { 
namespace log {

static const char* kDebugLevelVar = "DEBUGLEVEL";
static const int kDefaultLevel = 0;
static const int32_t kint32max  = (( int32_t) 0x7FFFFFFF);
int Logger::global_level_ = kint32max;

Logger::Logger(int level, bool ignore,
    const char* file, const int line)
  : level_(level), ignore_(ignore) {
  if (global_level_ == kint32max) {
    const char* level = getenv(kDebugLevelVar);
    if (level != NULL) {
      global_level_ = atoi(level);
    } else {
      global_level_ = kDefaultLevel;
    }
  }

  if (level_ <= global_level_)
    ignore_ = true;

  if (!ignore_) {
    if(level_ < LOG_MAX_LEVEL){
      switch (level_) {
        case LOG_NORMAL:    std::cerr << "LOG(NOMAL):\t"; break;
        case LOG_WARNING: std::cerr << "LOG(WARNING):\t"; break;
        case LOG_ERROR:   std::cerr << "LOG(ERROR):\t"; break;
        case LOG_FATAL:   std::cerr << "LOG(FATAL):\t"; break;
        default:      std::cerr << "LOG(" << level_ << "):\t"; break;
      }
      const char* basename = strrchr(file, '/');
      basename = basename ? basename + 1 : file;
      std::cerr << basename << ":" << line << "\t";
      //std::cerr << basename << ":" << line << "\n";
    }
  }
}

Logger::~Logger() {
  if (level_ > global_level_ && !ignore_) {
    std::cerr << std::endl;
    std::cerr.flush();
  }
}

} // namespace log 
} // namespace mmp
