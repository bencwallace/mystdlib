#include "string.h"

using mystd::String;

int main() {
    String s0;              // default constructor
    s0 = {'\0'};
    String s1(1, "h");      // construct from array
    String s2({'\0'});      // constructor from null-terminated array
    s2.to_cstring();

    return 0;
}
