#include <gtest/gtest.h>
#include "../ai_agent.h"

TEST(agent, getNextMove) {
        AiAgent agent;
        EXPECT_EQ(Move::rock, agent.nextMove());
}
