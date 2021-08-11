#ifndef MYSTD_STREAM_H
#define MYSTD_STREAM_H

#include <cstdio>
#include <unistd.h>

#include "string.h"

namespace mystd {

class OutStream {
private:
    FILE *fd;

public:
    OutStream(FILE *fd);

    void my_write(int n, const char *) const;
    void my_write(const String &s) const;
};

const OutStream std_out = OutStream(stdout);

#include "stream.tpp"

}

#endif
