/* A tournament consists of several rock player scissor players (agents). When the tournament is run
   it is determined which player won. */

#include "player.h"

class Tournament {
public:
        Tournament() = default;
        Player run(); /* Run the tournament and return the winner. */
};


