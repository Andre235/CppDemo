#include <iostream>
#include <ctime>

const int MAX = 4;

// 在写函数之前，我们习惯性先声明一个函数，再写具体函数的实现
void getSeconds(unsigned long *second);
int getMaxNum(int, int);
int * getRandomArray();

int main() {
/*    int result = getMaxNum(1,2);

    std::cout << "Hello, World!" << result << std::endl;*/

/*    const char *names[MAX] = {
            "Zara Ali",
            "Hina Ali",
            "Nuha Ali",
            "Sara Ali",
    };

    for (int i = 0; i < MAX; i++){
        std::cout << "Value of names[" << i << "] = ";
        std::cout << names << std::endl;
    }*/
//    unsigned long time;
//    getSeconds(&time);
//    std::cout << time;
    std::cout << "hello world";
    std::cerr << "std::cerr";
    std::clog << "std::clog";
    return 0;
}

int getMaxNum(int num1, int num2){
    return num1 >= num2 ? num1 : num2;
}

/**
 * 传递一个指针给函数
 * @param second 秒
 */
void getSeconds(unsigned long *second){
    *second = time(NULL);
}

/**
 * @return 获取一个随机数组(通过指针的形式返回)
 */
int * getRandomArray(){
    static int array[10];
    // 设置随机种子
    srand((unsigned) time(NULL));
    for (int i = 0; i < 10; ++i) {
        array[i] = rand();
        std::cout << array[i] << std::endl;
    }
    return array;
}


