#include <cassert>
#include <iostream>

#include "test.h"

int main() {
    int in[100], out[100];
    for (int i = 0; i < 100; ++i) {
        in[i] = i;
    }
    inc(in, out);
    for (int i = 0; i < 100; ++i) {
        assert(out[i] = in[i] + 1);
    }
}
