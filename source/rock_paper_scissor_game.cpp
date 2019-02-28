#include "rock_paper_scissor_game.h"

void RockPaperScissorGame::addPlayers(Player player1, Player player2) {
        playerA = player1;
        playerB = player2;
}

void RockPaperScissorGame::play() {
        
}

Player RockPaperScissorGame::getWinner() {
        return playerA;
}
