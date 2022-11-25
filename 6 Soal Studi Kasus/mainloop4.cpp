#include <iostream>

using namespace std;

int main()
{
    int i, sum, rata;
    sum = 0;
    for(i = 1; i <= 20; i++){
        sum = sum + i;
        rata = sum / i;
        cout << i << endl;
    }
    cout << "jumlah     = " << sum << endl;
    cout << "rata-rata  = " << rata << endl;

    return 0;
}
