#ifndef ROCK_PAPER_SCISSOR_ROCK_PAPER_SCISSOR_GAME_H
#define ROCK_PAPER_SCISSOR_ROCK_PAPER_SCISSOR_GAME_H

/* A rock paper scissor game consists of two players. At the count of three the two players
   show either a rock, paper or scissor. Rock beats scissor, paper beats rock and scissor
   beats paper. The two players keep showing either rock, scissor or paper until one player
   has won the round. */
#include <functional>

enum class Winner {player1, player2, draw};
enum class Move {rock, paper, scissor};

class RockPaperScissorGame {
public:
        /* Given two functions that generate moves this function returns who won the game. */
        static Winner play(std::function<Move()> player1, std::function<Move()> player2);
};

#endif /* header guard */
