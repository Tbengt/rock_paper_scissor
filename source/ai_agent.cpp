#include "ai_agent.h"

AiAgent::AiAgent() {
        std::random_device randomDevice;
        randomGenerator.seed(randomDevice());
}

Move AiAgent::nextMove() {
        std::uniform_int_distribution<> distribution(1, 3);
        int number = distribution(randomGenerator);

        return getMoveFromNumber(number);
}

Move AiAgent::getMoveFromNumber(int number) {
        switch (number) {
        case 1 : return Move::rock;
        case 2 : return Move::paper;
        case 3 : return Move::scissor;
        default : return Move::rock;
        }
}
