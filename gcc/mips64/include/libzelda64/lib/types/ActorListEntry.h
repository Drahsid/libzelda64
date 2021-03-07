#ifndef ACTORLISTENTRY_TYPE_H
#define ACTORLISTENTRY_TYPE_H

#include <inttypes.h>

typedef enum {
    ACTORLIST_CATEGORY_SWITCH,
    ACTORLIST_CATEGORY_BG,
    ACTORLIST_CATEGORY_PLAYER,
    ACTORLIST_CATEGORY_EXPLOSIVE,
    ACTORLIST_CATEGORY_NPC,
    ACTORLIST_CATEGORY_ENEMY,
    ACTORLIST_CATEGORY_PROP,
    ACTORLIST_CATEGORY_ITEM,
    ACTORLIST_CATEGORY_MISC,
    ACTORLIST_CATEGORY_BOSS,
    ACTORLIST_CATEGORY_DOOR,
    ACTORLIST_CATEGORY_CHEST,
    ACTORLIST_CATEGORY_COUNT
} ACTORLIST_CATEGORY;

typedef struct ActorListEntry {
    /* 0x00 */ int32_t length;
    /* 0x04 */ struct Actor* head;
} ActorListEntry; /* 0x08 */

#endif

