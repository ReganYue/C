#include <assert.h>

/**
 * Returns the value of the first argument raised to the power of the second argument.
 * @param a the base.
 * @param b the exponent.
 * @return the value {@code a}<sup>{@code b}</sup>.
 */
long pow(int a, int b) {
    long power = 1;
    for (int i = 1; i <= b; ++i) {
        power *= a;
    }
    return power;
}

void test() {
    assert(1 == pow(0, 0));
    assert(0 == pow(0, 10));
    assert(1 == pow(1, 0));
    assert(2 == pow(2, 1));
    assert(625 == pow(25, 2));
}

int main() {
    test();
    return 0;
}

