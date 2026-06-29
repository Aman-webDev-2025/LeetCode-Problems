#include <iostream>
#include <algorithm>
using namespace std;

int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) noexcept {
    const long long area1 = static_cast<long long>(ax2 - ax1) * (ay2 - ay1);
    const long long area2 = static_cast<long long>(bx2 - bx1) * (by2 - by1);

    const long long overlapWidth = max(0LL, static_cast<long long>(min(ax2, bx2)) - max(ax1, bx1));
    const long long overlapHeight = max(0LL, static_cast<long long>(min(ay2, by2)) - max(ay1, by1));

    return static_cast<int>(area1 + area2 - (overlapWidth * overlapHeight));
}

int main() {
    // Example test case: Rectangles overlapping
    int totalArea = computeArea(-3, 0, 3, 4, 0, -1, 9, 2);
    
    cout << "Total Area Covered: " << totalArea << std::endl;
    return 0;
}
