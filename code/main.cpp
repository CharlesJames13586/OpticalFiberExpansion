#include <iostream>
#include <vector>

void input(int &N, int &M, int &T, int &P, int &D);
void inputSTD(int M, int *STD);
void inputST(int T, int *ST);
void outputST(int T, int *ST);
void outputSTD(int M, int *STD);

// 光纤网络的邻接表，元组为(连边的终点，连边的距离)
std::vector<std::vector<std::tuple<int, int>>> networks;

int main() {
    // 处理输入
    int N, M, T, P, D;
    input(N, M, T, P, D);
    // std::cout << N << ' ' << M << ' ' << T << ' ' << P << ' ' << D << std::endl;
    int * MSTD = new int [M*3];        // 存储连边的起点、终点和距离
    inputSTD(M, MSTD);
    // outputSTD(M, MSTD);
    int * TST = new int [T*2];         // 存储业务的起点和终点
    inputST(T, TST);
    // outputST(T, TST);

    // 建立光纤网络的邻接表
    networks.resize(N);

    return 0;
}

void input(int &N, int &M, int &T, int &P, int &D) {
    std::cin >> N >> M >> T >> P >> D;
}

void inputSTD(int M, int *STD){
    for(int i=0; i<M; i++){
        std::cin >> STD[i*3] >> STD[i*3+1] >> STD[i*3+2];
    }
}

void outputSTD(int M, int *STD){
    for(int i=0; i<M; i++){
        std::cout << STD[i*3] << ' ' << STD[i*3+1] << ' ' << STD[i*3+2] << std::endl;
    }
}

void inputST(int T, int *ST){
    for(int i=0; i<T; i++){
        std::cin >> ST[i*2] >> ST[i*2+1];
    }
}

void outputST(int T, int *ST){
    for(int i=0; i<T; i++){
        std::cout << ST[i*2] << ' ' << ST[i*2+1] << std::endl;
    }
}