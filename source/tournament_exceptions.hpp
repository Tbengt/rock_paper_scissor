struct NoPlayersException : public std::exception {
	const char * what () const throw () {
                return "Cannot run tournament with no players added!";
        }
};
