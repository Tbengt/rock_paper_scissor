#include "tournament.hpp"
#include <map>
#include <algorithm>

using ScoreCard = std::map<Player, int>;

static void playGameAndRegisterScore(const Player& player1, const Player& player2, ScoreCard& scoreCard);
static Player findWinner(const ScoreCard& scoreCard);

void Tournament::addPlayer(Player participant) {
        participants.push_back(participant);
}

Player Tournament::run() {

        ScoreCard scoreCard;
        for (auto& player : participants) {
                scoreCard.insert(std::make_pair(player, 0));
        }
        
        for (auto& player1 : participants) {
                for (auto& player2 : participants) {
                        playGameAndRegisterScore(player1, player2, scoreCard);
                }
                
        }
                        
        return findWinner(scoreCard);
}


static void playGameAndRegisterScore(const Player& player1, const Player& player2, ScoreCard& scoreCard) {
        Winner winner = RockPaperScissorGame::play(std::bind( &Player::nextMove, player1),
                                                   std::bind( &Player::nextMove, player2));

        if (winner == Winner::player1) {
                scoreCard[player1]++;
        }
        else if (winner == Winner::player2) {
                scoreCard[player2]++;
        }
}

static Player findWinner(const ScoreCard& scoreCard) {
        auto winner = std::max_element(scoreCard.begin(), scoreCard.end(),
                                       [](const std::pair<Player, int>& p1, const std::pair<Player, int>& p2) {
                                               return p1.second < p2.second; });
        return (*winner).first;
}
