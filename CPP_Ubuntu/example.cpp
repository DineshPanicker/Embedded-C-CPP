#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> input = {1, 2, 15, 7, 20, 8};
    std::vector<int> output(input.size());  // allocate space

    auto is_less_than_10 = [](int x) {
        return x < 10;
    };

    // copy only numbers < 10
    auto it = std::copy_if(input.begin(), input.end(),
                           output.begin(),
                           is_less_than_10);

    // print copied elements
    for (auto iter = output.begin(); iter != it; ++iter) {
        std::cout << *iter << " ";
    }
    std::cout << "\n";
}
