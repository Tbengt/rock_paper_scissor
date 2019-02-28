#include <gtest/gtest.h>
#include "../player.h"
#include <set>

TEST(player, getNextMoveRandom) {
        Player player;
        std::set<Move> moves = {};
        for (int i = 0; i < 20; i++) {
                moves.insert(player.nextMove());
        }
        // This test may fail with a probability of about 1 in a billion.
        EXPECT_EQ(3, moves.size());
}
