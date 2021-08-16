#include <cassert>
#include <strings.h>

#include "string.h"

using mystd::String;

int main() {
    String s0;              // default constructor
    const char *cstr = "hello";
    String s1(cstr);        // constructor from null-terminated array
    assert(!strcasecmp(cstr, s1.to_cstring()));
    String s2 {s1};         // copy constructor
    String s3(10, 'x');     // repeat constructor
    for (char c : s3)       // iterator
        assert(c == 'x');

    return 0;
}
