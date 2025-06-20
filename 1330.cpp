#include <iostream>
using namespace std;

int main(){
    int amount = 1330; 
    
    int hundred , fifty, twenty, one;

    hundred = amount/100;
    amount = amount%100;

    
    fifty = amount/50;
    amount = amount%50;

    
    twenty = amount/20;
    amount = amount%20;

    
    one = amount/1;

    cout <<"100 notes:" <<hundred<< endl;
    cout<< "50 notes:" <<fifty<<endl;
    cout<< "20 notes:" <<twenty << endl;
    cout <<"1 notes:"<<one<<endl;

    return 0;

}