#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	
	char stack_arr[9][8]; int num[9] = {};
	
	// parsing input
    for(int count=0; count<8; count++) {
        string s; getline(cin, s);
        
        for(int j=-3; j<30; j+=4){
            if(s[j+4]!=' ')
                stack_arr[(j+3)/4][num[(j+3)/4]++] = s[j+4];
        }
    }
    
    // pushing values into stacks
    stack<char> stacks[9];
    for(int i=0; i<9; i++){
        for(int j=num[i]-1; j>=0; j--)
            stacks[i].push(stack_arr[i][j]);
    }
    
    string snumbers; getline(cin, snumbers); // reading final line of supply stacks input
    
    // reading moves
    for(string s; getline(cin, s);){
        stringstream ss; ss << s; string tmp;
        int arr[3], integer, c=0;
        
        while (!ss.eof()){
            ss >> tmp;
            if(stringstream(tmp) >> integer)
                arr[c++]=integer;
            tmp = "";
        }
        
        char selected_stacks[arr[0]];
        for(int j=0; j<arr[0]; j++){
            selected_stacks[j]=stacks[arr[1]-1].top();
            stacks[arr[1]-1].pop();
        }
            
        for(int j=arr[0]-1; j>=0; j--)
            stacks[arr[2]-1].push(selected_stacks[j]);
        
    }
    
    // result
    for(int i=0; i<9; i++)
        cout << stacks[i].top();
    
	return 0;
}
