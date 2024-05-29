#include "utils.h"

int main() {
    // int a = 40;
    // int b = 3;
    // int c = 4;
    // double size;
    // size = a/1000.0;
    // // cout << size << endl;
    // cout << (b + c)/2 << endl;

    // string s = "abcd";
    // cout << s.size() << endl;

    std::vector<int> vec = {1, 2, 3, 4, 5};

    // 使用迭代器遍历向量
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " "; // 使用 * 操作符访问迭代器指向的元素
    }
    
    return 0;
}
