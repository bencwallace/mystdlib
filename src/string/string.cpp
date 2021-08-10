#include "string.h"

int main() {
    String s0;              // default constructor
    String s1(1, "h");      // construct from array
    String s2({'\0'});      // constructor from null-terminated array

    return 0;
}
