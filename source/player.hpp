/* An AI agent can play games. This AI agent can play rock paper scissors. */

#include <random>
#include <functional>

#include "rock_paper_scissor_game.hpp"

class Player {
public:
        Player();
        Player(std::string name);
        Move nextMove();
        void setMoveGenerator(std::function<Move()> newMoveGenerator);
        std::string name = "Klas";
        
        friend bool operator== (const Player &player1, const Player &player2);
        friend bool operator< (const Player &player1, const Player &player2);
private:
        std::mt19937 randomGenerator;
        std::function<Move()> moveGenerator = nullptr;
        Move randomMoveGenerator();
};


