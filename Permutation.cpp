#include <iostream>
#include <new>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <ctime>
#include <numeric>  
#include <functional>

using namespace std;

const int n = 3;
std::vector <int> permutation;
bool chosen[n+1];

void search() {
    if(permutation.size() == n) {
        for(int i=0; i < permutation.size(); i++) {
            cout << permutation[i] << ' ';
        }
        cout << endl;
    }else {
        for(int i=1; i<=n; i++) {
            if(chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}


int main() {

    search();

    return 0;
}