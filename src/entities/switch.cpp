#include "switch.h"
#include "../game.h"
#include "../state.h"
#include "../sfx.h"

extern Game game;

EntityType Switch::onCollide(Entity* me, Entity& other, Entity& player) {
    if (me->mirror == MIRROR_HORIZONTAL) {
        return UNSET;
    }

    if (other.type == BOOMERANG || other.type == SWORD || other.type == PROJECTILE) {
        me->mirror = MIRROR_HORIZONTAL;

        if (other.type == BOOMERANG && game.roomType == THREE_SWITCHES_ONE_BOOMERANG) {
            if (game.areAllSwitchesTriggered()) {
                game.spawnChest(KEY);
                game.roomType = NORMAL;
                Sfx::play(Sfx::successJingle);
            }
        } else {
            game.removeAllTriggerDoors();
            game.emergeAllBridges();
        }

        Sfx::stop();
    }

    return UNSET;
}

