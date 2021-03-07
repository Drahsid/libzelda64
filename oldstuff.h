//typedef struct {
//    /* 0x00 */ uint32_t age;
//    /* 0x04 */ float deku_stick_length;
//    /* 0x08 */ Color_RGBA8_u32 gauntlet_color;
//    /* 0x0C */ Color_RGBA8_u32 bottle_color;
//    /* 0x10 */ Color_RGBA8_u32 tunic_color;
//    /* 0x14 */ uint16_t sound_id;
//    /* 0x16 */ uint8_t tunic_id;
//    /* 0x17 */ uint8_t sword_id;
//    /* 0x18 */ uint8_t shield_id;
//    /* 0x19 */ uint8_t boots_id;
//    /* 0x1A */ uint8_t strength_upgrade_id;
//    /* 0x1B */ uint8_t hand_closed;
//    /* 0x1C */ uint8_t item_held_left;
//    /* 0x1D */ uint8_t item_held_right;
//    /* 0x1E */ uint8_t item_back;
//    /* 0x1F */ uint8_t item_mask;
//    /* 0x20 */ uint8_t action_param;
//    /* 0x21 */ uint8_t is_zz; // playas data is not in it's own structure to save a couple bytes due to alignment, it starts here
//    /* 0x22 */ uint16_t eye_index;
//    /* 0x24 */ uint32_t eye_texture;
//    /* 0x28 */ uint32_t skeleton;
//    /* 0x2C */ uint32_t base;
//} puppet_info_t; /* sizeof = 0x30 */

//typedef struct {
//    /* 0x000 */ Actor actor;
//    /* 0x13C */ uint8_t frame_data[0x86];
//    /* 0x1C2 */ int16_t _pad;
//    /* 0x1C4 */ SkelAnime skelanime;
//    /* 0x208 */ ColliderCylinder collider;
//    /* 0x254 */ puppet_info_t puppet;
//    /* 0x284 */ uint32_t end;
//} entity_t; /* sizeof = 0x288 */