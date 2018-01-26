#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		set<int> a;
		while(n--){
			int u;
			cin>>u;
			a.insert(u);
		}
		set<int>::iterator i = a.begin();
		for(;i!=a.end();i++){
			cout<<*i<<" ";
		}
		cout<<endl;
		a.clear();
	}	
	return 0;
}