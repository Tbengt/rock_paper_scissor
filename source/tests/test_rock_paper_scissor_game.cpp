#include <gtest/gtest.h>
#include "../rock_paper_scissor_game.h"

TEST(rock_paper_scissor, createGame) {
        RockPaperScissorGame game;
}


TEST(rock_paper_scissor, gameHasWinner) {
        RockPaperScissorGame game;
        Player player1;
        Player player2;
        game.addPlayers(player1, player2);
}
