#include <gtest/gtest.h>
#include "../player.hpp"
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

TEST(player, comparisonOperatorEqual) {
        Player player{"Patrik"};
        EXPECT_TRUE(player == player);
}

TEST(player, comparisonOperatorNotEqual) {
        Player player1{"Patrik"};
        Player player2{"Gustav"};
        EXPECT_FALSE(player1 == player2);
}

TEST(player, lessThanOperator) {
        Player player1{"Patrik"};
        Player player2{"Gustav"};
        EXPECT_FALSE(player1 < player2);
}
