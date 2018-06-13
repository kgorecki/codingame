#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int H;
    cin >> H; cin.ignore();
    string S1, S2;
    for (int i = 0; i < H; i++) {
        if (0 == i)
            getline(cin, S2);
        S1 = S2;
        if (i != H - 1)
            getline(cin, S2);
        for (int j = 0; j < S1.length(); j++) {
            if ('\\' == S1[j]) {
                cout << "UNSTABLE" << endl;
                return 1;
            } else if ('/' == S1[j]) {
                ++j;
                if ('\\' != S1[j]) {
                    cout << "UNSTABLE" << endl;
                    return 1;
                }
                if (i != H - 1 && '\\' != S2[j - 1]) {
                    cout << "UNSTABLE" << endl;
                    return 1;
                }
            }
        }
    }
    
    cout << "STABLE" << endl;
    return 0;
}

