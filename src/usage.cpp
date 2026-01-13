#include "usage.hpp"
#include <sstream>
#include <string>

int errorHandling(int ac, const char **av) {

    if (ac == 2 && (std::string(av[1]) == "-h" || std::string(av[1]) == "--help")) {
        std::cout << HELP << std::endl;
        return 1;
    } else if (ac == 2) { // Only if the original program doesn't run with 2 args
        std::cout << ERROR_INVALID_ARG_NB << std::endl;
        return -1;
    }
    return 0;
}
