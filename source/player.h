/* An AI agent can play games. This AI agent can play rock paper scissors. */

#include <random>
#include <functional>

enum class Move {rock, paper, scissor};

class Player {
public:
        Player();
        Player(std::string name);
        Move nextMove();
        void setMoveGenerator(std::function<Move()> newMoveGenerator);
        std::string name = "Klas";
private:
        std::mt19937 randomGenerator;
        std::function<Move()> moveGenerator = nullptr;
        Move randomMoveGenerator();
};


