#ifndef blobMother_h
#define blobMother_h

#include <Arduboy2.h>
#include "../entity.h"
#include "../entityTypes.h"

struct BlobMother {
    static EntityType update(Entity* me, Entity& player, Game& game, Arduboy2Base& arduboy, uint8_t frame);
};

#endif

