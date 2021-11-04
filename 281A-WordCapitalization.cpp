#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	if(((int)s[0])>=97)cout<<(char)(s[0]-32);
	else cout<<s[0];
	for(int i=1;i<s.size();i++){
		cout<<s[i];
	}
}
