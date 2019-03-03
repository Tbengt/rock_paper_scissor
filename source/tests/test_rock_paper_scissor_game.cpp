#include <gtest/gtest.h>
#include "../rock_paper_scissor_game.hpp"

TEST(rock_paper_scissor, createGame) {
        RockPaperScissorGame game;
}


TEST(rock_paper_scissor, addPlayers) {
        RockPaperScissorGame game;
        Player player1;
        Player player2;
        game.addPlayers(player1, player2);
}

TEST(rock_paper_scissor, getWinnerRockPaper) {
        RockPaperScissorGame game;
        Player player1{"Sara"};
        player1.setMoveGenerator([]{return Move::rock;});
        Player player2{"Lovisa"};
        player2.setMoveGenerator([]{return Move::paper;});
        game.addPlayers(player1, player2);
        game.play();
        EXPECT_EQ("Lovisa", game.getWinner().name);
}

TEST(rock_paper_scissor, noWinnerBeforePlay) {
        RockPaperScissorGame game;
        EXPECT_EQ("NoWinnerYet", game.getWinner().name);
}


TEST(rock_paper_scissor, getWinnerRockScissor) {
        RockPaperScissorGame game;
        Player player1{"Sara"};
        player1.setMoveGenerator([]{return Move::rock;});
        Player player2{"Lovisa"};
        player2.setMoveGenerator([]{return Move::scissor;});
        game.addPlayers(player1, player2);
        game.play();
        EXPECT_EQ("Sara", game.getWinner().name);
}

TEST(rock_paper_scissor, getWinnerScissorRock) {
        RockPaperScissorGame game;
        Player player1{"Sara"};
        player1.setMoveGenerator([]{return Move::scissor;});
        Player player2{"Lovisa"};
        player2.setMoveGenerator([]{return Move::rock;});
        game.addPlayers(player1, player2);
        game.play();
        EXPECT_EQ("Lovisa", game.getWinner().name);
}

TEST(rock_paper_scissor, getWinnerScissorPaper) {
        RockPaperScissorGame game;
        Player player1{"Sara"};
        player1.setMoveGenerator([]{return Move::scissor;});
        Player player2{"Lovisa"};
        player2.setMoveGenerator([]{return Move::paper;});
        game.addPlayers(player1, player2);
        game.play();
        EXPECT_EQ("Sara", game.getWinner().name);
}

TEST(rock_paper_scissor, twoDifferentGames) {
        RockPaperScissorGame game;
        RockPaperScissorGame game2;
        Player player1{"Sara"};
        player1.setMoveGenerator([]{return Move::scissor;});
        Player player2{"Lovisa"};
        player2.setMoveGenerator([]{return Move::paper;});
        game.addPlayers(player1, player2);
        game.play();

        player2.setMoveGenerator([]{return Move::rock;});
        game2.addPlayers(player1, player2);
        game2.play();
        
        EXPECT_EQ("Sara", game.getWinner().name);
        EXPECT_EQ("Lovisa", game2.getWinner().name);
}


TEST(rock_paper_scissor, getWinnerPaperRock) {
        RockPaperScissorGame game;
        Player player1{"Sara"};
        player1.setMoveGenerator([]{return Move::paper;});
        Player player2{"Lovisa"};
        player2.setMoveGenerator([]{return Move::rock;});
        game.addPlayers(player1, player2);
        game.play();
        EXPECT_EQ("Sara", game.getWinner().name);
}

TEST(rock_paper_scissor, getWinnerPaperScissor) {
        RockPaperScissorGame game;
        Player player1{"Sara"};
        player1.setMoveGenerator([]{return Move::paper;});
        Player player2{"Lovisa"};
        player2.setMoveGenerator([]{return Move::scissor;});
        game.addPlayers(player1, player2);
        game.play();
        EXPECT_EQ("Lovisa", game.getWinner().name);
}

TEST(rock_paper_scissor, handleDrawPaperPaper) {
        RockPaperScissorGame game;
        Player player1{"Sara"};
        player1.setMoveGenerator([]{return Move::paper;});
        Player player2{"Lovisa"};
        player2.setMoveGenerator([]{return Move::paper;});
        game.addPlayers(player1, player2);
        game.play();
        EXPECT_EQ("NoWinnerYet", game.getWinner().name);
}
