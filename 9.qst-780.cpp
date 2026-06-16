#include <iostream>
class Solution {
public:
    bool reachingPoints(int a, int b, int c, int d) {
        while (d >= b && c >= a) {
            if (a == c) return (d - b) % c == 0;
            if (b == d) return (c - a) % d == 0;
            if (d > c) d %= c;
            else c %= d;
        }
        return false;
    }
};
int main() {
    Solution solver;
    std::cout << std::boolalpha << solver.reachingPoints(1, 1, 3, 5) << "\n";
    return 0;
}
