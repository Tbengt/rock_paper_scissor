/* An AI agent can play games. This AI agent can play rock paper scissors. */

enum class Move {rock, paper, scissor};

class AiAgent {
public:
        AiAgent() = default;
        Move nextMove();
};


