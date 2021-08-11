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

    OutStream &operator<<(const String &s);
};

OutStream std_out = OutStream(stdout);

#include "stream.tpp"

}

#endif
