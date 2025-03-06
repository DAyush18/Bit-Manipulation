#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    n = 4;
    if((n & n-1) == 0){
        cout<<"It is Power of Two"<<endl;
    }else{
        cout<<"It is Not"<<endl;
    }
    return 0;
}