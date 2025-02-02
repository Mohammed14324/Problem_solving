#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  string s;
  cin>>s;
  ll posh=s.find('h');
  ll pose=s.find('e',posh+1);
  ll posl1=s.find('l',pose+1);
  ll posl2=s.find('l',posl1+1);
  ll poso=s.find('o',posl2+1);
  if(posh!=string::npos &&pose!=string::npos &&posl1!=string::npos &&posl2!=string::npos &&poso!=string::npos){
      cout<<"YES";
      return 0;
  }
  else{
      cout<<"NO";
      return 0;
  }
}