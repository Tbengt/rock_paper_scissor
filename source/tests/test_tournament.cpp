#include <gtest/gtest.h>
#include "../tournament.hpp"

class TournamentTest : public ::testing::Test {
protected:
        Tournament tournament;
        Player p1{"Hanna"};
        Player p2{"Elin"};
        Player p3{"Julia"};
        Player p4{"Rakel"};
};

TEST_F(TournamentTest, addPlayerToTournament) {
        tournament.addPlayer(p1);
}

TEST_F(TournamentTest, addSeveralPlayersToTournament) {
        tournament.addPlayer(p1);
        tournament.addPlayer(p2);
        tournament.addPlayer(p3);
        tournament.addPlayer(p4);
}

TEST_F(TournamentTest, runTwoPlayerTournamentPlayerOneWins) {
        p1.setMoveGenerator([]{return Move::rock;});
        p2.setMoveGenerator([]{return Move::scissor;});

        tournament.addPlayer(p1);
        tournament.addPlayer(p2);

        EXPECT_EQ(p1, tournament.run());
}

TEST_F(TournamentTest, runTwoPlayerTournamentPlayerTwoWins) {
        p1.setMoveGenerator([]{return Move::rock;});
        p2.setMoveGenerator([]{return Move::paper;});

        tournament.addPlayer(p1);
        tournament.addPlayer(p2);

        EXPECT_EQ(p2, tournament.run());
}

TEST_F(TournamentTest, runFourPlayerTournamentPlayerThreeWins) {
        p1.setMoveGenerator([]{return Move::rock;});
        p2.setMoveGenerator([]{return Move::rock;});
        p3.setMoveGenerator([]{return Move::paper;});
        p4.setMoveGenerator([]{return Move::scissor;});
        
        tournament.addPlayer(p1);
        tournament.addPlayer(p2);
        tournament.addPlayer(p3);
        tournament.addPlayer(p4);

        EXPECT_EQ(p3, tournament.run());
}

TEST_F(TournamentTest, runTournamenNoPlayersThrowsException) {
        EXPECT_THROW(tournament.run(), NoPlayersException);
}
