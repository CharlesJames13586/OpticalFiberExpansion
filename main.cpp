#include <iostream>


void input(int N, int M, int T, int P, int D, int* ST);


int main() {
    int N, M, T, P, D;
    int *ST;
    input(&N, &M, &T, &P, &D, *ST)
    return 0;
}

// 处理输入
void input(int N, int M, int T, int P, int D, int* ST){
    // 第一行5个整数，依次是节点数量N、连边数量M、业务数量T、单边通道数量P、最大衰减距离D
    cin >> N >> M >> T >> P >> D;
    // 接着T行，每行两个整数S、T，表示需要新增业务的起点和终点
}
