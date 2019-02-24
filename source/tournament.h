/* A tournament consists of several rock player scissor players (agents). When the tournament is run
   it is determined which player won. */

#include "ai_agent.h"

class Tournament {
public:
        Tournament() = default;
        AiAgent run(); /* Run the tournament and return the winner. */
};


