#!/bin/sh
# For build ffmpeg

PREFIX=./build_dir

CONFIGURE_OPTIONS="--enable-shared    --disable-static   --disable-postproc \
   --disable-version3  --disable-devices   --disable-nonfree --disable-gpl --disable-doc \
   --disable-mmx   --disable-zlib --disable-network \
   --disable-ffserver  --disable-ffplay  --disable-ffmpeg  --disable-ffprobe \
   --disable-avdevice \
   --disable-bsfs --disable-filters \
   --enable-filter=buffer  --enable-filter=buffersink --enable-filter=crop \
   --enable-filter=hflip   --enable-filter=lut --enable-filter=lutyuv \
   --enable-filter=lutrgb  --enable-filter=overlay --enable-filter=scale \
   --enable-filter=transpose --enable-filter=unsharp --enable-filter=vflip \
   --disable-protocols \
   --enable-protocol=file \
   --disable-encoders \
   --disable-muxers \
   --disable-parsers \
   --enable-parser=aac --enable-parser=h264 --enable-parser=mpegaudio \
   --enable-parser=h263    --enable-parser=mpeg4video      --enable-parser=mpegvideo \
   --disable-demuxers \
   --enable-demuxer=aac    --enable-demuxer=h264   --enable-demuxer=mpegts \
   --enable-demuxer=amr    --enable-demuxer=m4v    --enable-demuxer=mpegtsraw \
   --enable-demuxer=asf    --enable-demuxer=mmf    --enable-demuxer=mpegvideo \
   --enable-demuxer=avi    --enable-demuxer=mov    --enable-demuxer=ogg \
   --enable-demuxer=flac   --enable-demuxer=mp3    --enable-demuxer=wav \
   --enable-demuxer=h263   --enable-demuxer=mpegps --enable-demuxer=matroska \
   --enable-demuxer=dv \
   --disable-decoders \
   --enable-decoder=alac   --enable-decoder=h264           --enable-decoder=wmv1 \
   --enable-decoder=flac   --enable-decoder=mpeg4          --enable-decoder=wmv2 \
   --enable-decoder=h263   --enable-decoder=mpegvideo      --enable-decoder=wmv3 \
   --enable-decoder=vc1 \
   --enable-decoder=h263i  --enable-decoder=theora  \
   --enable-decoder=pcm_alaw  --enable-decoder=pcm_mulaw  \
   --enable-encoder=h263   --enable-encoder=h263p  --enable-encoder=mpeg4   \
   --enable-decoder=bmp  --enable-encoder=bmp       \
   --enable-decoder=tiff \
   --enable-decoder=mp3  --enable-decoder=amrnb    \
   --enable-encoder=aac  --enable-decoder=aac      \
   --enable-swscale        --disable-yasm"

./configure --prefix=$PREFIX $CONFIGURE_OPTIONS

make
make install
