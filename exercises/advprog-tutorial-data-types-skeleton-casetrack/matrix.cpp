#include <vector>
#include <iostream>

void print_vector(std::vector<int> v);

int main() {
    std::vector<int> v;
    int value{};
    std::cout << "Enter integer values (non-integer to exit): ";
    while(std::cin >> value) {
        v.push_back(value);
    }
    std::cin.clear();
    std::cin.ignore();

    print_vector(v);

    int N = v.size();
    std::vector<std::vector<int>> v2d(N, std::vector<int>(N));
    for (size_t row = 0; row < N; row++) {
        for (size_t col = 0; col < N; col++) {
            std::cout << "v2d[" << row << "][" << col << "]: ";
            std::cin >> v2d[row][col];
        }
    }
    std::vector<int> m{};
    for (size_t row = 0; row < N; row++) {
        int sum{};
        for (size_t col = 0; col < N; col++){
            sum += v2d[row][col] * v[col];           
        }
        m.push_back(sum);
    }

    // std::cout << "m = A·v: [ ";
    // for (size_t i = 0; i < m.size(); i++) {
    //     std::cout << m.at(i) << " ";
    // }
    // std::cout << "]" << std::endl;

    print_vector(m);
    
    return 0;
}

void print_vector(std::vector<int> v) {
    std::cout << "Vector elements: ";
    for (const auto& elem : v) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}