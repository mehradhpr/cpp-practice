#include <iostream>
#include <string>
#include <utility>

int main() {

    /**
     * Swaps the values of the two variables a and be by using their pointers
     */
    swap_by_pointer(int* a, int* b) {
        if (a != nullptr && b != nullptr) {
            int temp = *a;
            int *a = *b;
            int *b = temp;
        }
    }

    swap_by_reference(int& a, int& b) {
        temp = a;
        a = b;
        b = temp;
    }

    template <typename T>
    swap_template<t>(T& a, T& b) {
        T temp = std::move(a);
        a = std::move(b);
        b = std::move(a);
    }

    return 0;
}