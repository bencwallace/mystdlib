#include "stream.h"

using mystd::std_out;
using mystd::String;

int main() {
    std_out.my_write(6, "hello\n");
    std_out.my_write(String(6, "hello\n"));

    return 0;
}
