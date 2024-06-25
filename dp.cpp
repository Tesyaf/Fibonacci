#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

long long int fib(int num){
    vector<long long int> fibo(num + 1);
    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i <= num; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    return fibo[num];
}

int main(){
    int input = 10;

    cout << "n : " << input << endl;
    auto start = high_resolution_clock::now();
    cout << fib(input) << endl;
    auto stop = high_resolution_clock::now();
    auto runtime = duration_cast<nanoseconds>(stop - start);
    cout << "Runtime: " << runtime.count() << " nanoseconds" << endl;
}