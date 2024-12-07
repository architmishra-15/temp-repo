// color.h

#ifndef COLOR_H
#define COLOR_H

#if defined(_WIN32) || defined(_WIN64)
    // Windows color codes

    #define RESET   "\x1b[0m"
    #define RED     "\x1b[31m"
    #define GREEN   "\x1b[32m"
    #define YELLOW  "\x1b[33m"
    #define BLUE    "\x1b[34m"
    #define MAGENTA "\x1b[35m"
    #define CYAN    "\x1b[36m"
    #define WHITE   "\x1b[37m"

    // Bold colors (Windows may not fully support these; so using the same colors for consistency and ease of use)

    #define BOLD_RED     "\x1b[31m"
    #define BOLD_GREEN   "\x1b[32m"
    #define BOLD_YELLOW  "\x1b[33m"
    #define BOLD_BLUE    "\x1b[34m"
    #define BOLD_MAGENTA "\x1b[35m"
    #define BOLD_CYAN    "\x1b[36m"
    #define BOLD_WHITE   "\x1b[37m"

#else

    // POSIX system color codes
    #define RESET "\033[0m"
    #define RED "\033[1;31m"
    #define GREEN "\033[1;32m"
    #define YELLOW "\033[1;33m"
    #define BLUE "\033[1;34m"
    #define MAGENTA "\033[1;35m"
    #define CYAN "\033[1;36m"
    #define WHITE "\033[1;37m"

    // Bold colors
    #define BOLD_RED "\033[1;91m"
    #define BOLD_GREEN "\033[1;92m"
    #define BOLD_YELLOW "\033[1;93m"
    #define BOLD_BLUE "\033[1;94m"
    #define BOLD_MAGENTA "\033[1;95m"
    #define BOLD_CYAN "\033[1;96m"
    #define BOLD_WHITE "\033[1;97m"
#endif
#endif // COLOR_H