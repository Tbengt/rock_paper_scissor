#include <gtest/gtest.h>
#include "../rock_paper_scissor_game.h"

TEST(rock_paper_scissor, createGame) {
        RockPaperScissorGame game;
}


TEST(rock_paper_scissor, addPlayers) {
        RockPaperScissorGame game;
        Player player1;
        Player player2;
        game.addPlayers(player1, player2);
}

TEST(rock_paper_scissor, getWinner) {
        RockPaperScissorGame game;
        Player player1;
        Player player2;
        game.addPlayers(player1, player2);
        game.play();
        game.getWinner();
}
