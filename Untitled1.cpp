#include <stdio.h>

// Function to count the number of even divisors
int countEvenDivisors(int N) {
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0 && i % 2 == 0) {
            count++;
        }
    }
    return count;
}

// Function to count the number of odd divisors
int countOddDivisors(int N) {
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0 && i % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Input number N for each test case

        // Count even and odd divisors
        int evenDivisors = countEvenDivisors(N);
        int oddDivisors = countOddDivisors(N);

        // Compare f(N) and g(N)
        if (evenDivisors > oddDivisors) {
            printf("1\n");
        } else if (evenDivisors == oddDivisors) {
            printf("0\n");
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
