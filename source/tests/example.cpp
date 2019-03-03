#include "../tournament.hpp"
#include <iostream>

int main() {
        Tournament tournament;
        Player peter{"Peter"};
        Player sara{"Sara"};
        Player amanda{"Amanda"};

        tournament.addPlayer(peter);
        tournament.addPlayer(sara);
        tournament.addPlayer(amanda);

        Player winner = tournament.run();
        std::cout << winner.name << std::endl;

}
