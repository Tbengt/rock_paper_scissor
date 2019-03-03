/* An AI agent can play games. This AI agent can play rock paper scissors. */

#include <random>
#include <functional>

#include "rock_paper_scissor_game.hpp"

class Player {
public:
        Player(); /* Construct a player with default name */
        Player(std::string name); /* Construct a player with the given name */
        Move nextMove(); /* Returns the next move (rock, paper or scissor) that the player wants to do. */
        std::string name = "Klas"; /* The name of the player (default name is Klas).*/
        
        void setMoveGenerator(std::function<Move()> newMoveGenerator); /* Override the default nextMove function. Allows 
                                                                        * a programmer to implement their own rock, paper
                                                                        * scissor bot. */
        
        friend bool operator== (const Player &player1, const Player &player2); /* Implement the equality operator. Allows
                                                                                * programmer to compare two Players using == */
        friend bool operator< (const Player &player1, const Player &player2); /* Implement the less than operator. Allows
                                                                                * programmer to compare two Players using < */
private:
        std::mt19937 randomGenerator;
        std::function<Move()> moveGenerator = nullptr;
        Move randomMoveGenerator();
};


