#include "secretWall.h"
#include "tileBitmaps.h"
#include "tileRoom.h"
#include "state.h"
#include "util.h"

EntityType SecretWall::onCollide(Entity* me, Entity& other, Entity& player) {
    uint8_t w = me->width;
    uint8_t h = me->height;

    if (other.type == EXPLOSION) {
        me->health = 0;
        me->currentFrame = 1;

        const uint8_t roomIndex = TileRoom::getRoomIndex(TileRoom::x, TileRoom::y);
        State::setTriggered(roomIndex);
        State::saveToEEPROM();
    }

    return UNSET;
}
