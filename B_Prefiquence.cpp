#include <iostream>
#include <string>

using namespace std;

// 函数用于计算最长公共子序列的长度
int maxPrefixSubsequence(const string& a, const string& b) {
    int k = 0; // 用于记录最长公共子序列的长度
    int indexB = 0; // b字符串的当前索引

    // 遍历字符串a
    for (int i = 0; i < a.length(); ++i) {
        
        if (a[i] == '0') {
             // 如果a[i]是'0'，需要在b中找到相应的'0'
            while (indexB < b.length() && b[indexB] != '0') {
                indexB++; // 移动b的索引直到找到'0'或到达b的末尾
            }
            if (indexB < b.length()) {
                k++; // 找到了'0'，增加k
                indexB++; // 移动b的索引到下一个字符
            } else {
                // 如果b中没有更多的'1'，结束循环
                break;
            }
        } else {
            // 如果a[i]是'1'，需要在b中找到相应的'1'
            while (indexB < b.length() && b[indexB] != '1') {
                indexB++; // 移动b的索引直到找到'1'或到达b的末尾
            }
            if (indexB < b.length()) {
                k++; // 找到了'1'，增加k
                indexB++; // 移动b的索引到下一个字符
            } else {
                // 如果b中没有更多的'1'，结束循环
                break;
            }
        }
    }
    return k; // 返回最长公共子序列的长度
}

int main() {
    int t; // 测试用例的数量
    cin >> t;
    while (t--) {
        int n, m; // a和b的长度
        cin >> n >> m;
        string a, b; // 二进制字符串a和b
        cin >> a >> b;
        cout << maxPrefixSubsequence(a, b) << endl; // 输出最长公共子序列的长度
    }
    return 0;
}