#include <iostream>

using namespace std;

int main()
{
    int x, maks, mins;
    for(int i = 0;; i++){
    cin >> x;
    if(x > maks){
        maks = x;
    }
    if(x < mins && x != -99){
        mins = x;
    }
    if(x == -99){
        cout << endl;
        cout << "Max = " << maks << endl;
        cout << "Min = " << mins << endl;
        break;
        }
    }
    return 0;
}
