#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to check if a number is a binary decimal
bool isBinaryDecimal(int num) {
    // Convert the number to string
    string numStr = to_string(num);
    
    // Check if all digits are either 0 or 1
    for (char digit : numStr) {
        if (digit != '0' && digit != '1') {
            return false;
        }
    }
    return true;
}

// Function to perform DFS to find all possible factor combinations
bool dfs(int n, long long  num, int idx) {
    // Check if the current number is a binary decimal
    if (num != 1 && isBinaryDecimal(num)) {
        // If it's a binary decimal and divides n completely, return true
        if (n % num == 0) {
            return true;
        }
    }
    
    // Continue DFS with all possible factors
    for (int i = idx; i * i <= n; ++i) {
        if (n % i == 0) {
            if (dfs(n, num * i, i)) {
                return true;
            }
        }
    }
    
    return false;
}

// Function to determine if n can be represented as a product of binary decimals
string canBeProductOfBinaryDecimals(int n) {
    // Check if n itself is a binary decimal
    if (isBinaryDecimal(n)) {
        return "YES";
    }
    
    // Start DFS to find all possible factor combinations
    if (dfs(n, 1, 2)) {
        return "YES";
    }
    
    return "NO";
}

int main() {
    // Input number of test cases
    int t;
    cin >> t;

    // Iterate through each test case
    while (t--) {
        // Input the value of n for each test case
        int n;
        cin >> n;
        
        // Output whether n can be represented as a product of binary decimals
        cout << canBeProductOfBinaryDecimals(n) << endl;
    }

    return 0;
}
