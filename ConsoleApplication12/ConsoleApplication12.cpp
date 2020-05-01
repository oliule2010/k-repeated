/* k-repeated
    check if there is k repeats in the vector. If there is return true if there is not return false;
*/
#include <vector>
using namespace std;
#include <iostream>

bool check_k_repeat(const vector<int> & input, int k){
    if (k == 1) {
        return true;
    }
    int l = input.size() / k;
    for (int i = 0; i < input.size() / k; i++) {
        for (int j = 0; j < k; j++) {
            if (input[i] != input[i + (j * l)]) {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    vector<int> input{ 1, 2, 3, 1, 2, 3, 1, 2, 3 };
    cout << check_k_repeat(input, 3);
}