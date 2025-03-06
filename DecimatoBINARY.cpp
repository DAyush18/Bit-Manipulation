#include<bits/stdc++.h>
using namespace std;

void ContoBinary(int n){
    string result = "";
    while(n > 0){
        result += (n % 2 == 1) ? "1" : "0";
        n = n /2; 
    }
    reverse(result.begin(),result.end());
    cout<<"The Binary is ->>"<<result<<endl;

}

int main(){
    int n;
    cout<<"Enter the Value of n"<<endl;
    cin>>n;
    ContoBinary(n); 
    return 0;
}