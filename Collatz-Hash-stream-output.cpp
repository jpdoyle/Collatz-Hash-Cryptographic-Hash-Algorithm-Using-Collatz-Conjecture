#include<string>
#include "Collatz Hash/Collatz-Hash.h"

using namespace std;

int main() {
    const int numblocks = 1e6;
    const string key = "testkey";

    for (int i = 0; i < numblocks; ++i) {
        string input = key + to_string(i);
        string fullHash = Collatz_Hash_6(input);
        cout << fullHash;
    }

    return 0;
}
