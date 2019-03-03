#include "player.hpp"

static Move getMoveFromNumber(int number);

Player::Player() {
        std::random_device randomDevice;
        randomGenerator.seed(randomDevice());
//        setMoveGenerator( []{return Move::paper;} );
//        setMoveGenerator( [this](){return randomMoveGenerator();} );
//        setMoveGenerator( std::bind(&Player::randomMoveGenerator, this));
}

Player::Player(std::string name) {
        std::random_device randomDevice;
        randomGenerator.seed(randomDevice());
        this->name = name;
}

Move Player::nextMove() {
        if (moveGenerator)
                return moveGenerator();

        return randomMoveGenerator();
}

void Player::setMoveGenerator(std::function<Move()> newMoveGenerator) {
        moveGenerator = newMoveGenerator;
}

Move Player::randomMoveGenerator() {
        std::uniform_int_distribution<> distribution(1, 3);
        int number = distribution(randomGenerator);

        return getMoveFromNumber(number);
}

static Move getMoveFromNumber(int number) {
        switch (number) {
        case 1 : return Move::rock;
        case 2 : return Move::paper;
        case 3 : return Move::scissor;
        default : return Move::rock;
        }
}

bool operator== (const Player &player1, const Player &player2) {
        return player1.name == player2.name;
}

bool operator< (const Player &player1, const Player &player2) {
        return player1.name < player2.name;
}
