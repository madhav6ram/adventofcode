#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    
    ll maxscore = 0;
    
    for(string x; getline(cin, x);){
        char elf = x[0], me = x[2];
        ll score=0;
        
        if(me=='X')//r
            score+=1, me='A';
        if(me=='Y')//p
            score+=2, me='B';
        if(me=='Z')//s
            score+=3, me='C';
            
        cout << score << endl;
            
        if((me=='A' && elf=='C')||(me=='B' && elf=='A')||(me=='C' && elf=='B'))
            score+=6;
        else if(me==elf)
            score+=3;
        else
            score+=0;
            
        maxscore+=score;
    }
    
    cout << maxscore;
    
    return 0;    
}
