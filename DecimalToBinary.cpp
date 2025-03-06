#include<bits/stdc++.h>
using namespace std;

string DecimaltoBinary(int n){
  string result = "";

  while(n> 0){
    result += (n % 2 == 1) ? "1" : "0";
    n = n /2;
  }
  return result;
}

int main(){
  cout<<DecimaltoBinary(4);
  return 0;
}