#include <iostream>

using namespace std;

int main()
{
    int i;
    for(i = 100; i > 0; i--){
        if(i == 54){
            break;
        }
        cout << i << endl;
    }
    return 0;
}
