#ifndef _FORMAT_MP4_MP4_ATOM_H_ 
#define _FORMAT_MP4_MP4_ATOM_H_

#include "macro/macro.h"

namespace mmp {
namespace format {

enum MP4FourCC {
  FOURCC_NULL = 0,
  FOURCC_MDAT = MAKE_FOURCCTYPE('m','d','a','t'),
  FOURCC_MOOV = MAKE_FOURCCTYPE('m','o','o','v'),
  FOURCC_TREF = MAKE_FOURCCTYPE('t','r','e','f'),
  FOURCC_MDIA = MAKE_FOURCCTYPE('m','d','i','a'),
  FOURCC_MINF = MAKE_FOURCCTYPE('m','i','n','f'),
  FOURCC_MVHD = MAKE_FOURCCTYPE('m','v','h','d'),
  FOURCC_TRAK = MAKE_FOURCCTYPE('t','r','a','k'),
  FOURCC_TKHD = MAKE_FOURCCTYPE('t','k','h','d'),
  FOURCC_LOAD = MAKE_FOURCCTYPE('l','o','a','d'),
  FOURCC_TMCD = MAKE_FOURCCTYPE('t','m','c','d'),
  FOURCC_CHAP = MAKE_FOURCCTYPE('c','h','a','p'),
  FOURCC_SYNC = MAKE_FOURCCTYPE('s','y','n','c'),
  FOURCC_SCPT = MAKE_FOURCCTYPE('s','c','p','t'),
  FOURCC_SSRC = MAKE_FOURCCTYPE('s','s','r','c'), 
  FOURCC_HINT = MAKE_FOURCCTYPE('h','i','n','t'),
  FOURCC_MDHD = MAKE_FOURCCTYPE('m','d','h','d'),
  FOURCC_HDLR = MAKE_FOURCCTYPE('h','d','l','r'),
  FOURCC_VMHD = MAKE_FOURCCTYPE('v','m','h','d'),
  FOURCC_STBL = MAKE_FOURCCTYPE('s','t','b','l'),
  FOURCC_STSD = MAKE_FOURCCTYPE('s','t','s','d'),
  FOURCC_STTS = MAKE_FOURCCTYPE('s','t','t','s'),
  FOURCC_STSC = MAKE_FOURCCTYPE('s','t','s','c'),
  FOURCC_STSS = MAKE_FOURCCTYPE('s','t','s','s'),
  FOURCC_STSZ = MAKE_FOURCCTYPE('s','t','s','z'),
  FOURCC_STCO = MAKE_FOURCCTYPE('s','t','c','o'),
  FOURCC_CTTS = MAKE_FOURCCTYPE('c','t','t','s'),
  FOURCC_MOOF = MAKE_FOURCCTYPE('m','o','o','f'),
  FOURCC_MFHD = MAKE_FOURCCTYPE('m','f','h','d'),
  FOURCC_TRAF = MAKE_FOURCCTYPE('t','r','a','f'),
  FOURCC_TFHD = MAKE_FOURCCTYPE('t','f','h','d'),
  FOURCC_TRUN = MAKE_FOURCCTYPE('t','r','u','n'),
  FOURCC_SDTP = MAKE_FOURCCTYPE('s','d','t','p'),
  FOURCC_UUID = MAKE_FOURCCTYPE('u','u','i','d'),
  FOURCC_DRIV = MAKE_FOURCCTYPE('d','r','I','V'),
  FOURCC_WAVE = MAKE_FOURCCTYPE('w','a','v','e'),
  FOURCC_ESDS = MAKE_FOURCCTYPE('e','s','d','s'),
  FOURCC_AVCC = MAKE_FOURCCTYPE('a','v','c','C'),
  FOURCC_SOON = MAKE_FOURCCTYPE('s','o','o','n'),
  FOURCC_VIDE = MAKE_FOURCCTYPE('v','i','d','e'),
  FOURCC_TEXT = MAKE_FOURCCTYPE('t','e','x','t'),
  FOURCC_PSSH = MAKE_FOURCCTYPE('p','s','s','h'),
  FOURCC_SBGP = MAKE_FOURCCTYPE('s','b','g','p'),
  FOURCC_SGPD = MAKE_FOURCCTYPE('s','g','p','d'),
  FOURCC_SAIZ = MAKE_FOURCCTYPE('s','a','i','z'),
  FOURCC_SAIO = MAKE_FOURCCTYPE('s','a','i','o'),
  FOURCC_CENC = MAKE_FOURCCTYPE('c','e','n','c'),
  FOURCC_SEIG = MAKE_FOURCCTYPE('s','e','i','g'),
  FOURCC_SENC = MAKE_FOURCCTYPE('s','e','n','c'),
  FOURCC_ENCV = MAKE_FOURCCTYPE('e','n','c','v'),
  FOURCC_FTYP = MAKE_FOURCCTYPE('f','t','y','p'),
  FOURCC_BLOC = 0x626C6F63,
  FOURCC_AC3  = MAKE_FOURCCTYPE('a','c','-','3'), // "ac-3"
  FOURCC_EAC3 = MAKE_FOURCCTYPE('e','a','-','3'),  // "ec-3"
  FOURCC_AVC1 = MAKE_FOURCCTYPE('a','v','c','1'),
  FOURCC_AVC3 = MAKE_FOURCCTYPE('a','v','c','3')
};

} // namespace format
}// namespace mmp
#endif //_FORMAT_MP4_MP4_ATOM_H_
