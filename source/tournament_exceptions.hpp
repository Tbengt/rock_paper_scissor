#ifndef ROCK_PAPER_SCISSOR_TOURNAMENT_EXCEPTION_H
#define ROCK_PAPER_SCISSOR_TOURNAMENT_EXCEPTION_H


struct NoPlayersException : public std::exception {
	const char * what () const throw () {
                return "Cannot run tournament with no players added!";
        }
};

#endif /* header guard */
