#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll part1=0, part2=0;

    for(string s; getline(cin, s);) {
        string a, b, c, d;
        int i=0;
        
        for(i; s[i]!='-'; i++)
            a+=s[i];
        for(++i; s[i]!=','; i++)
            b+=s[i];
        for(++i; s[i]!='-'; i++)
	        c+=s[i];
	    for(++i; i<s.length(); i++)
	        d+=s[i];
	    
	    int x1 = stoi(a);
	    int y1 = stoi(b);
	    int x2 = stoi(c);
	    int y2 = stoi(d);
        
        if((x1<=x2 && y1>=y2) || (x2<=x1 && y2>=y1))
            part1++;
        if((x2>=x1 && x2<=y1) || (x1>=x2 && x1<=y2))
            part2++;
    }
    
	cout << part1 << endl << part2;
    
	return 0;
}
