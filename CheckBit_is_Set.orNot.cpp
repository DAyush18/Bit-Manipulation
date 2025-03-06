#include<bits/stdc++.h>
using namespace std;

bool checkBit(int n, int bit){

    if(n & (1 << bit) != 0) {
        return true;
    }
    else
    return false;
}

int  main(){
  cout<<checkBit(10,2);
  return 0;
}