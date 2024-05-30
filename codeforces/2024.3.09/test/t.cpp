#include <iostream>
#include <stack>
using namespace std;

// 定义一个结构体，用于表示递归调用的参数
struct RecursionState {
    int n;  // 参数 n
    int result; // 保存中间结果
    int step;   // 记录当前递归步骤
};

int factorial(int n) {
    stack<RecursionState> state_stack;  // 定义一个栈，用于保存递归状态

    // 初始状态，将 n 压入栈中
    state_stack.push({n, 1, 1});

    while (!state_stack.empty()) {
        // 取出栈顶元素
        RecursionState current_state = state_stack.top();
        state_stack.pop();

        if (current_state.step == 1) {
            // 第一步：判断是否为递归终止条件
            if (current_state.n == 0 || current_state.n == 1) {
                current_state.result = 1;  // 设置中间结果为 1
                cout << "Base case reached." << endl;
            } else {
                // 不是递归终止条件，进入下一步
                current_state.step++;
                // 将新的递归状态压入栈中
                state_stack.push(current_state);
                state_stack.push({current_state.n - 1, 1, 1});
            }
        } else {
            // 第二步：递归计算
            current_state.result *= current_state.n;
            cout << "Factorial(" << current_state.n << ") = " << current_state.result << endl;
        }
    }

    // 返回计算结果
    return state_stack.top().result;
}

int main() {
    int n = 5;
    int result = factorial(n);
    cout << "Factorial of " << n << " is: " << result << endl;
    return 0;
}
