#ifndef tileBitmaps_h
#define tileBitmaps_h

const uint8_t PROGMEM dungeon_tiles[] = {
    // width, height,
    16, 16,
    // frame 0
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // frame 1
    0x00,0xfc,0xf8,0xf2,0xe6,0x0e,0x9e,0x1e,0x5e,0xde,0xc0,0xde,0xde,0x1e,0xde,0xde,0x00,0xdf,0xdf,0xdf,0xdf,0x00,0xfb,0xfb,0xfa,0x00,0x01,0x01,0x01,0x00,0x01,0x01,
    // frame 2
    0x00,0xdf,0xdf,0xdf,0xdf,0x00,0xfb,0xfb,0xfb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdf,0xdf,0xdf,0xdf,0x00,0xfb,0xfb,0xfb,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // frame 3
    0x80,0x80,0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x80,0x80,0x7b,0x7b,0x03,0x7b,0x7b,0x78,0x7b,0x7b,0x7b,0x7b,0x03,0x7b,0x7b,0x78,0x7b,0x7b,
    // frame 4
    0x00,0xa6,0x50,0x28,0x50,0xa3,0x42,0x81,0xca,0xdf,0x8a,0x85,0x8a,0xbf,0x0a,0x00,0x00,0x68,0x50,0x60,0x05,0x42,0x45,0x00,0x03,0x0a,0x1f,0x0a,0x07,0x2a,0x1f,0x00,
    // frame 5
    0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0x00,0x00,0x00,
    // frame 6
    0x30,0x30,0x30,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0xc0,0xc0,0xc0,0xc0,0x00,0x00,0x00,0x00,0x0c,0x0c,0x0c,0x0c,0x00,0x00,0xc0,0xc0,
    // frame 7
    0xce,0x6e,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x6e,0xce,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    // frame 8
    0x00,0x54,0x02,0x00,0x02,0x00,0x02,0x80,0x82,0x00,0x02,0x00,0x02,0x00,0xaa,0x00,0x00,0x55,0x00,0x40,0x00,0x40,0x00,0x41,0x01,0x40,0x00,0x40,0x00,0x40,0x2a,0x00,
    // frame 9
    0x00,0x54,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0xaa,0x00,0x00,0x55,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x2a,0x00,
};

const uint8_t PROGMEM overworld_tiles[] = {
    // width, height,
    16, 16,
    // frame 0
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    // frame 1
    0x0a,0xd4,0xa6,0xcf,0x86,0x40,0x06,0x8c,0xd6,0x5a,0x14,0x9c,0x55,0x89,0xa0,0x04,0x00,0x41,0x2f,0x86,0x51,0x32,0x70,0x59,0x02,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,
    // frame 2
    0x30,0xfa,0x7b,0x15,0x83,0x29,0xbc,0x29,0x04,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x20,0xf8,0xa5,0x5a,0xbb,0x77,0xb8,0x69,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    // frame 3
    0x7f,0x7f,0xff,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x1f,0x5e,0x00,0x44,0x2f,0x6f,0x02,0x7d,0x1c,0x21,0x15,0x48,0x1f,0xae,0x5d,0x04,
    // frame 4
    0xf8,0xf2,0x05,0x22,0x71,0x60,0x05,0xe0,0xe6,0x0e,0xae,0x40,0xf9,0x73,0xe3,0x20,0x10,0x6c,0xf0,0x40,0x36,0x78,0x78,0x01,0x37,0x55,0xa8,0x21,0xb2,0x91,0xfb,0xac,
    // frame 5
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x78,0x5f,0x57,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x57,0x5f,0x78,
    // frame 6
    0x40,0x00,0x10,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x04,0x04,0x00,0x00,0x40,0x80,0x08,0x08,0x40,0x40,0x02,0x02,0x00,0x10,0x10,0x00,0x00,0x04,0x04,0x00,0x80,
    // frame 7
    0x0a,0xee,0xee,0x0e,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x0e,0xee,0xee,0x0a,0x20,0xbf,0xbf,0xe0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xe0,0xbf,0xbf,0x20,
    // frame 8
    0x00,0x00,0x00,0x01,0x01,0x91,0xb9,0xbd,0xa1,0x81,0x89,0xa1,0xbd,0xb9,0x91,0x00,0xa0,0x80,0x00,0x00,0x40,0x40,0x40,0x58,0x40,0x5c,0x40,0x5e,0x40,0x40,0x40,0x00,
    // frame 9
    0x00,0x91,0xb9,0xbd,0xa1,0x89,0x81,0xa1,0xbd,0xb9,0x91,0x01,0x01,0x00,0x00,0x00,0x00,0x40,0x40,0x40,0x5e,0x40,0x5c,0x40,0x58,0x40,0x40,0x40,0x00,0x00,0x80,0xa0,
    // frame 10
    0xff,0xff,0xbf,0xdf,0xbf,0xff,0xef,0xff,0xff,0xff,0x7f,0xbf,0x7f,0xff,0xff,0xff,0xff,0xff,0xf7,0xeb,0xf7,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xff,0xff,
};

const uint8_t PROGMEM secretOpening_tiles[] = {
    // width, height,
    16, 16,
    // frame 0
    0x2a,0x5b,0x84,0x04,0x04,0x04,0x02,0x01,0x01,0x02,0x02,0x02,0x02,0x03,0xbc,0x42,0xf5,0xaf,0xf3,0xe1,0x40,0xc0,0xc0,0xc0,0x80,0xc0,0xc0,0x40,0xc0,0x80,0xe0,0xf5,
};

const uint8_t PROGMEM title_tiles[] = {
    // width, height,
    58, 24,
    // frame 0
    0x00,0xc0,0xc0,0xc0,0xc0,0xc0,0x00,0x00,0x00,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0x80,0x00,0x00,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0x80,0x00,0x00,0xc0,0xc0,0x00,0x00,0xc0,0xc0,0xc0,0xc0,0x00,0xc0,0xc0,0xc0,0x80,0x00,0x00,0x00,0x38,0x7c,0xee,0xc7,0x83,0xc7,0xee,0x7c,0x38,0x00,0xc0,0xc0,0xc0,0x00,0x00,0xf8,0xff,0x60,0x60,0xff,0xff,0xff,0xf0,0x00,0xff,0xff,0x60,0x60,0xff,0xff,0xff,0xdf,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0xff,0xff,0x00,0x03,0x1f,0xf8,0xf8,0xff,0xff,0x1f,0x03,0x00,0xff,0xff,0xff,0x0f,0x3e,0xf8,0xfe,0xfc,0x00,0x00,0xff,0x01,0xff,0x00,0x00,0xfc,0x60,0x60,0xff,0xff,0xff,0xf0,0x03,0x03,0x00,0x00,0x03,0x03,0x03,0x03,0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x03,0x03,0x00,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x03,0x03,0x03,0x00,0x00,0x00,0xd9,0xf8,0x70,0x70,0xff,0xac,0xff,0x00,0x00,0x03,0x00,0x00,0x03,0x03,0x03,0x03,
};

#endif