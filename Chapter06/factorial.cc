#include "Chapter6.h"

int factorial(int i) {
    int result = 1;
    while(i > 1) {
        result *= i--;
    }
    return result;
}
