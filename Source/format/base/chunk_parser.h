#ifndef _FORMAT_BASE_CHUNK_PARSER_H_
#define _FORMAT_BASE_CHUNK_PARSER_H_

#include <stdint.h>
#include "macro/macro.h"

namespace MMP {
namespace format {

class ChunkParser {
  public:
    ChunkParser();
    virtual ~ChunkParser();
    virtual bool ParseChunk(const uint8_t* buf, int size) = 0;
  private:
    MAKE_NONCOPYABLE(ChunkParser)
};
} // namespace format 
} // namespace MMP 
#endif //_FORMAT_BASE_CHUNK_PARSER_H_
