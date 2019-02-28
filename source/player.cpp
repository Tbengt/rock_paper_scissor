#include "player.h"

Player::Player() {
        std::random_device randomDevice;
        randomGenerator.seed(randomDevice());
}

Move Player::nextMove() {
        std::uniform_int_distribution<> distribution(1, 3);
        int number = distribution(randomGenerator);

        return getMoveFromNumber(number);
}

Move Player::getMoveFromNumber(int number) {
        switch (number) {
        case 1 : return Move::rock;
        case 2 : return Move::paper;
        case 3 : return Move::scissor;
        default : return Move::rock;
        }
}
