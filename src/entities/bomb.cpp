#include "bomb.h"

EntityType Bomb::update(Entity* me, Entity& player, Game& game, Arduboy2Base& arduboy, uint8_t frame) {
    // initial duration? then "spawn"
    if (me->duration == 150) {
        me->tookDamageCount = 0;
        me->mirror = 0;
    }

    // health is being used for "is dormant"
    // health=0 -> dormant item drop
    // health=1 -> active bomb that will explode
    if (me->health == 0) {
        return UNSET;
    }

    if (me->duration > 0) {
        me->duration -= 1;

        if (me->duration == 59) {
            me->tookDamageCount = 60;
        }

        return UNSET;
    } else {
        return EXPLOSION;
    }
}

