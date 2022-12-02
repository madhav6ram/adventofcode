#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    
    ll maxscore = 0;
    
    for(string x; getline(cin, x);){
        char elfc = x[0], end = x[2], me;
        ll score=0, elf;
        
        if(elfc=='A')//r
            elf=1;
        if(elfc=='B')//p
            elf=2;
        if(elfc=='C')//s
            elf=3;
        
        if(end=='X' && elfc=='A')//loss, r
            score+=3;
        else if(end=='X' && elfc!='A')//loss, p or s
            score+=elf-1;
        
        if(end=='Y')//draw
            score+=3+elf;
        
        if(end=='Z' && elfc=='C')//win, s
            score+=6+1;
        else if(end=='Z' && elfc!='C')//win r or p
            score+=6+elf+1;

        maxscore+=score;
    }
    
    cout << maxscore;
    
    return 0;    
}
