#include <cassert>
#include <strings.h>

#include "string.h"

using mystd::String;

int main() {
    String s0;              // default constructor
    const char *cstr = "hello";
    String s2(cstr);        // constructor from null-terminated array
    assert(!strcasecmp(cstr, s2.to_cstring()));

    return 0;
}
