#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int t;
    cin>>t;
    string in;
    string a[t];
    string answer;
    for(int i=0;i<t;i++){
        cin>>in;
        if(in.length()<=10){
            a[i]=in;
        }
        else{
            a[i]=(in[0]+to_string(in.length()-2)+in[in.length()-1]);
        }
    }
    for(string aj : a){
        cout<<aj<<endl;
    }
}