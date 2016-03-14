CMAKE_MINIMUM_REQUIRED (VERSION 2.8)
PROJECT (mixedmediaplayer)

# set dir to store library
SET (LIBRARY_OUTPUT_PATH ../Build)

# set dir for header
INCLUDE_DIRECTORIES (.)
SET(CMAKE_CXX_FLAGS "-ggdb --std=c++11 -Wall")

# sources
SET (LIBSRCS 
  log/logger.cpp  
  format/base/chunk_parser.cpp  
)

ADD_LIBRARY (mmp SHARED ${LIBSRCS})
