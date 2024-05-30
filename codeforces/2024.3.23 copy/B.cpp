#include <iostream>
#include <string>

int main() {
    int t; // 测试用例数量
    std::cin >> t; // 读取测试用例数量

    while (t--) { // 对于每个测试用例
        int n; // 棋盘大小
        std::cin >> n; // 读取棋盘大小

        // 输出棋盘格
        for (int i = 0; i < (1 << n); ++i) { // 2^n行
            for (int j = 0; j < (1 << n); ++j) { // 2^n列
                // 计算当前位置的字符
                char c = (i & j) ? '#' : '.';
                std::cout << c; // 输出字符
            }
            std::cout << '\n'; // 换行
        }
    }

    return 0;
}
