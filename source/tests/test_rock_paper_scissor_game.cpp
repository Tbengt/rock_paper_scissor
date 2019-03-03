#include <gtest/gtest.h>
#include "../rock_paper_scissor_game.hpp"


TEST(rock_paper_scissor, getWinnerRockPaper) {
        Winner winner = RockPaperScissorGame::play([]{return Move::rock;}, []{return Move::paper;});
        EXPECT_EQ(Winner::player2, winner);
}

TEST(rock_paper_scissor, getWinnerRockScissor) {
        Winner winner = RockPaperScissorGame::play([]{return Move::rock;}, []{return Move::scissor;});
        EXPECT_EQ(Winner::player1, winner);
}

TEST(rock_paper_scissor, getWinnerScissorRock) {
        Winner winner = RockPaperScissorGame::play([]{return Move::scissor;}, []{return Move::rock;});
        EXPECT_EQ(Winner::player2, winner);
}

TEST(rock_paper_scissor, getWinnerScissorPaper) {
        Winner winner = RockPaperScissorGame::play([]{return Move::scissor;}, []{return Move::paper;});
        EXPECT_EQ(Winner::player1, winner);
}

TEST(rock_paper_scissor, getWinnerPaperRock) {
        Winner winner = RockPaperScissorGame::play([]{return Move::paper;}, []{return Move::rock;});
        EXPECT_EQ(Winner::player1, winner);        
}

TEST(rock_paper_scissor, getWinnerPaperScissor) {
        Winner winner = RockPaperScissorGame::play([]{return Move::paper;}, []{return Move::scissor;});
        EXPECT_EQ(Winner::player2, winner);
}

TEST(rock_paper_scissor, handleDrawPaperPaper) {
        Winner winner = RockPaperScissorGame::play([]{return Move::paper;}, []{return Move::paper;});
        EXPECT_EQ(Winner::draw, winner);        
}
