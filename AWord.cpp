#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int lowct=0;
	int upct=0;
	int a=0;
	for(int i=0;i<s.size();i++){
		a=s[i];
		if(a>=97)lowct++;
		else upct++;
	}
	if(lowct>=upct){
		for(int i=0;i<s.size();i++){
			int x=s[i];
			if(x>=97)cout<<s[i];
			else cout<<(char)(s[i]+32);
		}
	}else{
		for(int i=0;i<s.size();i++){
			int x=s[i];
			if(x>=97)cout<<(char)(s[i]-32);
			else cout<<s[i];
		}
	}
}
