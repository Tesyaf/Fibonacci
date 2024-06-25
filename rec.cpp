#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

long long int fib(long long int num){
    if(num == 0 || num == 1){
        return num;
    }
    else{
        return fib(num - 1) + fib(num - 2);
    }
}

int main(){
    long long int input = 50;

    cout << "n : " << input << endl;
    auto start = high_resolution_clock::now();
    cout << fib(input) << endl;
    auto stop = high_resolution_clock::now();
    auto runtime = duration_cast<nanoseconds>(stop - start);
    cout << "Runtime: " << runtime.count() << " nanoseconds" << endl;
}