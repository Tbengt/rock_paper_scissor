/* A rock paper scissor game consists of two players. At the count of three the two players
   show either a rock, paper or scissor. Rock beats scissor, paper beats rock and scissor
   beats paper. The two players keep showing either rock, scissor or paper until one player
   has won the round. */
#include "player.hpp"

enum class Winner {player1, player2, draw};

class RockPaperScissorGame {
public:
        static Winner play(std::function<Move()> player1, std::function<Move()> player2);
};


