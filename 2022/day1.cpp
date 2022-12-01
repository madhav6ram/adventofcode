#include<bits/stdc++.h>
using namespace std;

int main(){
    long arr[99999], sum = 0, c = 0;
    
    for(string x; getline(cin, x);){
        if(x==""){
            arr[c++] = sum;
            sum=0;
            continue;
        }
        sum+=stoi(x);
    }
    
    sort(arr, arr+c);
    
    return 0;  
}
