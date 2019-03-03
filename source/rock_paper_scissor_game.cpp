#include "rock_paper_scissor_game.hpp"

Winner RockPaperScissorGame::play(std::function<Move()> player1, std::function<Move()> player2) {
        Move playerOneMove;
        Move playerTwoMove;
        int counter = 0;
        do {
                playerOneMove = player1();
                playerTwoMove = player2();
                counter++;
                if (counter > 1000)
                        return Winner::draw;

        } while (playerOneMove == playerTwoMove);
        
        if (playerOneMove == Move::rock && playerTwoMove == Move::paper)
                return Winner::player2;
        if (playerOneMove == Move::rock && playerTwoMove == Move::scissor)
                return Winner::player1;
        if (playerOneMove == Move::paper && playerTwoMove == Move::scissor)
                return Winner::player2;
        if (playerOneMove == Move::paper && playerTwoMove == Move::rock)
                return Winner::player1;;
        if (playerOneMove == Move::scissor && playerTwoMove == Move::paper)
                return Winner::player1;;
        if (playerOneMove == Move::scissor && playerTwoMove == Move::rock)
                return Winner::player2;
}
