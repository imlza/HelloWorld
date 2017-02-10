#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    auto start = clock();
    for (int i=0; i<100; i++) {
        cout << "Hello, World!" << endl;;
    }
    auto end = clock();
    cout << static_cast<double>((end-start)/CLOCKS_PER_SEC) << endl;
    system("pause");
    return 0;
}