CMAKE_MINIMUM_REQUIRED (VERSION 2.8)
PROJECT (mixedmediaplayer)

# set dir to store library
SET (LIBRARY_OUTPUT_PATH ../Build)

# set dir for header
INCLUDE_DIRECTORIES (.)

# sources
SET (LIBSRCS 
  format/base/chunk_parser.cpp  
)

ADD_LIBRARY (mmp SHARED ${LIBSRCS})
