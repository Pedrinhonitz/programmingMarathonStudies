#include <iostream>
#include <new>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <ctime>
#include <numeric>  
#include <functional>

using namespace std;

int main() {
    int n, i, sum=0, total, tudo=0;

    cin >> n;
    int numbers[n];

    for(i=0; i<n-1; i++) {
        cin >> numbers[i];
    }

    for(i=1; i<n+1; i++) {
        sum = sum + i;
    }

    
    for(i=0; i<n-1; i++) {
        total = numbers[i];
        tudo = total + tudo;
    }

    sum = sum - tudo;

    cout << sum << endl;
    return 0;
}