#include <iostream>
#include <vector>

/****************************
 * PROBLEM 1                *
 ****************************/
int problem1() {
    int sum = 0;

    for (std::size_t i = 0; i < 1000; ++i) {
        if (!(i % 3) || !(i % 5)) {
            sum += i;
        }
    }

    return sum;
}

/****************************
 * PROBLEM 2                *
 ****************************/
void fibSeq(int term1, int term2, std::vector<int>& pairVec);

int problem2() {
    int sum = 0;

    std::vector<int> pairVec;

    fibSeq(1, 2, pairVec);

    for (auto x: pairVec) sum += x;

    return sum;
}

void fibSeq(int term1, int term2, std::vector<int>& pairVec) {
    if (!(term2 % 2)) {
        pairVec.push_back(term2);
    }

    if (term2 < 4000000) {
        fibSeq(term2, (term1 + term2), pairVec);
    }
}

/****************************
 * PROBLEM 3                *
 ****************************/
bool isPrime(int number) {
    if (number <= 1) return false;

    for (std::size_t i = 2; i * i <= number; ++i) {
        if (number % i == 0) return false;
    }

    return true;
}

int problem3(){
    int factor = 0;



    return factor;
}

int main() {
    int p2 = problem2();
    std::cout << p2;
    return 0;
}