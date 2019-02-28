/* A rock paper scissor game consists of two players. At the count of three the two players
   show either a rock, paper or scissor. Rock beats scissor, paper beats rock and scissor
   beats paper. The two players keep showing either rock, scissor or paper until one player
   has won the round. */
#include "player.h"

class RockPaperScissorGame {
public:
        void addPlayers(Player player1, Player player2);
        void play();
        Player getWinner();

private:
        Player playerA;
        Player playerB;
        Player winner;
};


