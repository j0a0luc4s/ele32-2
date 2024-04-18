#include "channel.h"
#include <cstdlib>

std::vector<bool> bsc(std::vector<bool> in, double p) {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::vector<bool> out = in;
    for (int i = 0; i < out.size(); i++)
        if ((double) std::rand()/RAND_MAX < p)
            out[i] = ~out[i];
    return out;
}
