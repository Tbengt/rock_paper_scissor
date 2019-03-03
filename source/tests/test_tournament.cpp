#include <gtest/gtest.h>
#include "../tournament.hpp"

TEST(tournament, createTournament) {
        Tournament tournament;
}

TEST(tournament, addPlayerToTournament) {
        Tournament tournament;
        Player p1{"Hanna"};

        tournament.addPlayer(p1);
}

TEST(tournament, addSeveralPlayersToTournament) {
        Tournament tournament;
        Player p1{"Hanna"};
        Player p2{"Elin"};
        Player p3{"Julia"};
        Player p4{"Rakel"};

        tournament.addPlayer(p1);
        tournament.addPlayer(p2);
        tournament.addPlayer(p3);
        tournament.addPlayer(p4);
}

TEST(tournament, runTwoPlayerTournamentPlayerOneWins) {
        Tournament tournament;
        Player p1{"Hanna"};
        Player p2{"Peter"};

        p1.setMoveGenerator([]{return Move::rock;});
        p2.setMoveGenerator([]{return Move::scissor;});

        tournament.addPlayer(p1);
        tournament.addPlayer(p2);

        EXPECT_EQ("Hanna", tournament.run().name);
}

TEST(tournament, runTwoPlayerTournamentPlayerTwoWins) {
        Tournament tournament;
        Player p1{"Hanna"};
        Player p2{"Peter"};

        p1.setMoveGenerator([]{return Move::rock;});
        p2.setMoveGenerator([]{return Move::paper;});

        tournament.addPlayer(p1);
        tournament.addPlayer(p2);

        EXPECT_EQ("Peter", tournament.run().name);
}

// TEST(tournament, runFourPlayerTournamentPlayerThreeWins) {
//         Tournament tournament;
//         Player p1{"Hanna"};
//         Player p2{"Peter"};
//         Player p3{"Berta"};
//         Player p4{"Alvin"};

//         p1.setMoveGenerator([]{return Move::rock;});
//         p2.setMoveGenerator([]{return Move::rock;});
//         p3.setMoveGenerator([]{return Move::paper;});
//         p4.setMoveGenerator([]{return Move::scissor;});
        
//         tournament.addPlayer(p1);
//         tournament.addPlayer(p2);

//         EXPECT_EQ("Peter", tournament.run().name);
// }
