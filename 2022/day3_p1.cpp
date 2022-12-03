#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	
	ll sum=0;
	
	l1: ;
	for(string s; getline(cin, s);) {
	    string s1 = s.substr(0, s.length()/2);
        string s2 = s.substr(s.length()/2);
		
        for(int i=0; i<s1.length(); i++) {
            for(int j=0; j<s1.length(); j++){
                if(s[i]==s2[j]) {
                    if(islower(s[i]))
                        sum+=s[i]-'a'+1;
                    else
                        sum+=26+(s[i]-'A'+1);
                    goto l1;
                }
            }
        }
    }
    
	cout << sum;
    
	return 0;
}
