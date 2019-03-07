#ifndef ROCK_PAPER_SCISSOR_TOURNAMENT_H
#define ROCK_PAPER_SCISSOR_TOURNAMENT_H


/* A tournament consists of several rock player scissor players. When the tournament is run
   it is determined which player won. The tournament is a round robin tournament where
   each player faces every other player twice. */

#include <list>
#include "tournament_exceptions.hpp"
#include "player.hpp"


class Tournament {
public:
        Tournament() = default;
        Player run(); /* Run the tournament and return the winner. */
        void addPlayer(Player participant); /* Add a player to the tournament. */

private:
        std::list<Player> participants;
};

#endif /* header guard */
