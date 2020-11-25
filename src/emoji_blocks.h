#include <stdint.h>

typedef struct emoji_range {
    int32_t min_code;
    int32_t max_code;
    uint8_t bitmap[];
} emoji_range_t;

    static const emoji_range_t bmp_emoji_block = { 
  0x231a,
  0x2b55,
  {
 0x03
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x80
,0x47
,0x02
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x18
,0x00
,0x00
,0x0c
,0x00
,0x00
,0x00
,0x00
,0x00
,0xc0
,0xff
,0x03
,0x00
,0x00
,0x00
,0x00
,0x20
,0x00
,0x00
,0x02
,0x80
,0x00
,0x03
,0x00
,0x18
,0x0c
,0x10
,0x04
,0x00
,0x00
,0x01
,0x0b
,0x09
,0x08
,0x03
,0x00
,0x00
,0x40
,0x00
,0x00
,0x00
,0x00
,0x14
,0x2e
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x38
,0x00
,0x00
,0x40
,0x00
,0x20
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x06
,0x00
,0x00
,0x00
,0x00
,0x00
,0x40
,0x08
  }
};

static const emoji_range_t smp_emoji_block = { 
  0x1f004,
  0x1fad6,
  {
 0x01
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x08
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0xe4
,0x7f
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x20
,0x00
,0x00
,0x40
,0x00
,0x00
,0xc8
,0x77
,0x00
,0x00
,0x30
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0xf0
,0xff
,0xff
,0xff
,0x1f
,0x00
,0xfe
,0xfb
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xfd
,0xff
,0xff
,0x00
,0xf0
,0xff
,0xff
,0xff
,0xff
,0x7f
,0xf8
,0x00
,0xf0
,0xff
,0x1f
,0xf1
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xd7
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xf9
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0x03
,0x80
,0xf7
,0xff
,0xff
,0x0f
,0x00
,0x40
,0x00
,0x00
,0x00
,0x06
,0x00
,0x01
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x80
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0x0f
,0x00
,0x00
,0x00
,0x00
,0x00
,0xf0
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0x03
,0x71
,0x0e
,0x00
,0x80
,0x01
,0xff
,0x01
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0xf0
,0xff
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0xff
,0xff
,0xff
,0xff
,0xff
,0x7f
,0xff
,0xfb
,0xff
,0xff
,0xff
,0xff
,0xff
,0xdf
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xff
,0xfe
,0xff
,0xff
,0xff
,0xff
,0xff
,0x0f
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0x00
,0xf0
,0x71
,0xf0
,0x07
,0xf0
,0xff
,0xff
,0x1f
,0xf0
,0x07
,0x70
,0x00
,0xf0
,0x07
  }
};


static const emoji_range_t* emoji_ranges[] = {
  &bmp_emoji_block,
  &smp_emoji_block,
  0
};
