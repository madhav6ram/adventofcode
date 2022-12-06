#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int isunique(string s, int i, int x) {
    for(int j=i; j<i+x; j++) {
        for(int k=j+1; k<i+x; k++) {
            if(s[j]==s[k])
                return 0;
        }
    }
    return 1;
}

int main() {
	int x=4;    // x=14 for part 2;
	
	string s; getline(cin, s);
	
	for(int i=0; i<s.length()-x; i++){ 
	    if(isunique(s, i, x)) {
	        cout << i+x;
	        break;
	    }

	}
	
	return 0;
}
