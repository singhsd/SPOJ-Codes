#include<bits/stdc++.h>
using namespace std;
long long int a[100001];
stack<int> s;
int main()
{
 while(1)	
 {
 	int n; scanf("%d",&n);
 	if(n==0) break;
 	for(int i=0; i<n; i++) scanf("%d",&a[i]);
 	int top,i=0;
 	long long int la,ga=0;
 	while(i<n){
 		if(s.empty() || a[s.top()]<=a[i]) {s.push(i++); continue; }
 		top=s.top(); s.pop(); la=(long long)a[top]*(s.empty()?i:i-s.top()-1);
 		if(ga<la) ga=la;
 	}
 	while(!s.empty()){
 		top=s.top(); s.pop(); la=(long long)a[top]*(s.empty()?i:i-s.top()-1);
 		if(ga<la) ga=la;
 	}
 printf("%lld\n",ga);
 }
}