#include <iostream>
#include <vector>
#include <sstream>
#include <stdexcept>

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

int problem3() {
    int bestFactor = 0;
    unsigned long long int magicNumber = 600851475143;


    for (int i = 0; i * i <= magicNumber; ++i) {
        if (isPrime(i) && (magicNumber % i) == 0) {
            bestFactor = i;
        }
    }

    return bestFactor;
}

/****************************
 * PROBLEM 4                *
 ****************************/

int problem4() {
    std::stringstream ss;
    std::string s;

    int max_palindrome = 0;
    int product = 0;

    for (int i = 100; i <= 999; ++i) {
        for (int j = 100; j <= 999; ++j) {
            product = (i * j);
            ss << product;
            s = ss.str();
            ss.str(std::string());
            if (std::equal(s.begin(), s.begin() + s.size() / 2, s.rbegin())) {
                if (product > max_palindrome) {
                    max_palindrome = product;
                }
            }
        }
    }

    return max_palindrome;
}

/****************************
 * PROBLEM 5                *
 ****************************/

int main() {
    int p3 = problem4();
    std::cout << p3;
    return 0;
}