#include <iostream>

using namespace std;

int main()
{
    int i;
    for(i = 100; i > 0; i--){
        if(i % 2 == 1){
            continue;
        }
        cout << "Nilai genap " << i << endl;
    }
    return 0;
}
