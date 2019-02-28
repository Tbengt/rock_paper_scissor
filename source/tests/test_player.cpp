#include <gtest/gtest.h>
#include "../player.h"
#include <set>
#include <iostream>

TEST(player, getNextMoveRandom) {
        Player player;
        std::set<Move> moves = {};
        for (int i = 0; i < 20; i++) {
                moves.insert(player.nextMove());
        }

        EXPECT_EQ(3, moves.size()) << "This test may fail with a probability of about 1 in a billion when code is correct.";
}


TEST(player, setMoveGenerator) {
        Player player;
        player.setMoveGenerator([]{return Move::rock;});
        EXPECT_EQ(Move::rock, player.nextMove());
}

TEST(player, defaultName) {
        Player player;
        EXPECT_EQ("Klas", player.name);
}

TEST(player, setNameAtConstruction) {
        Player player{"Pelle"};
        EXPECT_EQ("Pelle", player.name);
}
