#include <gtest/gtest.h>
#include "../ai_agent.h"
#include <set>

TEST(agent, getNextMoveRandom) {
        AiAgent agent;
        std::set<Move> moves = {};
        for (int i = 0; i < 20; i++) {
                moves.insert(agent.nextMove());
        }
        // This test may fail with a probability of about 1 in a billion.
        EXPECT_EQ(3, moves.size());
}
