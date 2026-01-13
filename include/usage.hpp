#ifndef USAGE_HPP
#define USAGE_HPP

#include <iostream>

// Info
#define HELP "Usage:\n\t./project_name [arg1] [arg2]\n\nWhere:\n\t[arg1]\tArg1 description.\n\n\t[arg2]\tArg2 description.\n"

// Error
#define ERROR_INVALID_ARG "Error: Invalid argument"
#define ERROR_INVALID_ARG_NB "Error: Invalid number of arguments"
#define ERROR_INVALID_ARG_VALUE "Error: Invalid argument value"

int errorHandling(int ac, const char **av);

#endif // USAGE_HPP
