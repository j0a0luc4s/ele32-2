#include "generate.h"

std::vector<int> generate(int v, int dv, int dc) {
    std::vector<int> g(v*dv, 0);
    std::vector<int> count(v, 0);

    int c = (v*dv)/dc;

    std::set<int> s;
    for (int i = 0; i < c; i++) {
        s.clear();
        for (int j = 0; j < dc; j++) {
            int k;
            while (count[(k = std::rand() % v)] == dv || s.find(k) != s.end());
            g[dc*i + j] = k;
            count[k]++;
        }
    }

    return g;
}
