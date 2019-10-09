MaximumPairwiseProductProblem

Find the maximum product of two distinct numbers in a sequence of non-negative integers.
Input: Asequenceofnon-negative integers.
Output: The maximum value that can be obtained by multiplying two diﬀerent elements from the sequence.
5 6 2 7 4 5 30 10 35 20 6 30 12 42 24 2 10 12 7 4 7 35 42 14 28 4 20 24 8 28
Given a sequence of non-negative integers a1,...,an, compute
max 1≤i,j≤n
ai·aj .

Note that i andj should be diﬀerent,though it may be the case that ai =aj.

Inputformat. 
The ﬁrst line contains an integer n. The next line contains n non-negative integers a1,...,an (separated by spaces).
Outputformat.
The maximum pairwise product. Constraints. 2≤n≤2·105; 0≤a1,...,an≤2·105. 
Sample1. 
Input: 3 1 2 3 
Output: 6

//SOLUTION
#include <iostream>
#include <vector>
#include <algorithm>

int MaxPairwiseProduct(const std::vector<int>& numbers) {
    int max_product = 0;
    int n = numbers.size();

    for (int first = 0; first < n; ++first) {
        for (int second = first + 1; second < n; ++second) {
            max_product = std::max(max_product,
                numbers[first] * numbers[second]);
        }
    }

    return max_product;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
