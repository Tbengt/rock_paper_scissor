#include "rock_paper_scissor_game.h"

void RockPaperScissorGame::addPlayers(Player player1, Player player2) {
        playerA = player1;
        playerB = player2;
}

void RockPaperScissorGame::play() {
        Move playerOneMove;
        Move playerTwoMove;
        int counter = 0;
        do {
                playerOneMove = playerA.nextMove();
                playerTwoMove = playerB.nextMove();
                counter++;
                if (counter > 1000)
                        return;

        } while (playerOneMove == playerTwoMove);
        
        if (playerOneMove == Move::rock && playerTwoMove == Move::paper)
                winner = playerB;
        if (playerOneMove == Move::rock && playerTwoMove == Move::scissor)
                winner = playerA;
        if (playerOneMove == Move::paper && playerTwoMove == Move::scissor)
                winner = playerB;
        if (playerOneMove == Move::paper && playerTwoMove == Move::rock)
                winner = playerA;
        if (playerOneMove == Move::scissor && playerTwoMove == Move::paper)
                winner = playerA;
        if (playerOneMove == Move::scissor && playerTwoMove == Move::rock)
                winner = playerB;
}

Player RockPaperScissorGame::getWinner() {
        return winner;
}
