#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	
	ll sum=0;
	
	l1: ;
	for(string s1; getline(cin, s1);) {
	    
	    string s2, s3, c;
	    getline(cin, s2); getline(cin, s3);
	    
        for(int i=0; i<s1.length(); i++) {
            for(int j=0; j<s2.length(); j++){
                if(s1[i]==s2[j])
                    c+=s1[i];
            }
        }
        
        for(int i=0; i<c.length(); i++) {
            for(int j=0; j<s3.length(); j++) {
                if(c[i]==s3[j]) {
                    if(islower(c[i]))
                        sum+=c[i]-'a'+1;
                    else
                        sum+=26+(c[i]-'A'+1);
                    goto l1;
                }
            }
        }
    }
    
	cout << sum;
    
	return 0;
}
