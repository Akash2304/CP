/********************************************************************************************************************************************************************
Vanya got n cubes. He decided to build a pyramid from them. Vanya wants to build the pyramid as follows: the top level of the pyramid must consist of 1 cube,
the second level must consist of 1 + 2 = 3 cubes, the third level must have 1 + 2 + 3 = 6 cubes, and so on. Thus, the i-th level of the pyramid must 
have 1 + 2 + ... + (i - 1) + i cubes.

Vanya wants to know what is the maximum height of the pyramid that he can make using the given cubes.

Input
The first line contains integer n (1 ≤ n ≤ 104) — the number of cubes given to Vanya.

Output
Print the maximum possible height of the pyramid in the single line.

Examples
inputCopy
1
outputCopy
1
inputCopy
25
outputCopy
4
********************************************************************************************************************************************************************/
#include <iostream>
using namespace std;
int a, i = 0, last = 0, current = 0;
int main() {
    cin >> a;
    while (a > 0) {
        i++;
        current = last + i;
        last = current;
        a -= current;
        if (a < 0) {
            i--;
        }
    }
    cout << i;
}
