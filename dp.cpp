#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

long long int fib(int num){
    vector<long long int> arr(num + 1);
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= num; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[num];
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