#include "tournament.hpp"

void Tournament::addPlayer(Player participant) {
        participants.push_back(participant);
}

Player Tournament::getWinner() {
        return participants.front();
}

Player Tournament::run() {
        Winner winner = RockPaperScissorGame::play(std::bind( &Player::nextMove, participants.front()),
                                                   std::bind( &Player::nextMove, participants.back()));

        if (winner == Winner::player1)
                return participants.front();
        else
                return participants.back();
}

