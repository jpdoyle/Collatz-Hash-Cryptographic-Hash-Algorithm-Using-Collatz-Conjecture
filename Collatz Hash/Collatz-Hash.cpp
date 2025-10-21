#include <bits/stdc++.h>
#include "Collatz-Hash.h"



int main()
{
    /* cout<<"Type Input: "; */

    string input;
    getline(cin, input);

    string output=Collatz_Hash_6(input);
    cout << output << endl;
    
    return 0;
}


