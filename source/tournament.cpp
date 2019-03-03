#include "tournament.hpp"
#include <map>
#include <algorithm>

void Tournament::addPlayer(Player participant) {
        participants.push_back(participant);
}

Player Tournament::run() {

        std::map<std::string, int> scoreCard;
        for (auto& player : participants) {
                scoreCard.insert(std::make_pair(player.name, 0));
        }
        
        for (auto& player1 : participants) {
                for (auto& player2 : participants) {
                        Winner winner = RockPaperScissorGame::play(std::bind( &Player::nextMove, player1),
                                                                   std::bind( &Player::nextMove, player2));

                        if (winner == Winner::player1)
                                scoreCard[player1.name]++;
                        else if (winner == Winner::player2)
                                scoreCard[player2.name]++;
                }
                
        }

                        
        auto winner = std::max_element(scoreCard.begin(), scoreCard.end(),
                                       [](const std::pair<std::string, int>& p1, const std::pair<std::string, int>& p2) {
                                               return p1.second < p2.second; });
        return {(*winner).first};

}


