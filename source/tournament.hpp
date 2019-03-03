/* A tournament consists of several rock player scissor players. When the tournament is run
   it is determined which player won. The tournament is a round robin tournament which means
   that each player faces every other player once. */

#include <list>
#include "player.hpp"

class Tournament {
public:
        Tournament() = default;
        Player run(); /* Run the tournament and return the winner. */
        void addPlayer(Player participant);
        Player getWinner(); /* Return the winner. */
private:
        std::list<Player> participants;
};


