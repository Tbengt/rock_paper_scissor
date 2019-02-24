/* An AI agent can play games. This AI agent can play rock paper scissors. */
#include<random>

enum class Move {rock, paper, scissor};

class AiAgent {
public:
        AiAgent();
        Move nextMove();
private:
        std::mt19937 randomGenerator;
        Move getMoveFromNumber(int number);
};


