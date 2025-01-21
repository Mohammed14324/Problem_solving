#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin>>n;
    bool are=false;
    for(int i=n;i>0;i--){
        if(n%i==0){
            string s=to_string(i);
            for(char a:s ){
                if(a=='4' or a=='7'){
                    are=true;
                }
                else{
                    are=false;
                    break;
                }
            }
        }
        if(are){
            break;
        }
    }
    if(are){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}