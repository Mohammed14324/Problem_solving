#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
struct Deque {
    bool reversed = false;
    ll fronte = -1;
    ll tail = -1;
    ll* arr;
    ll max_size;
    ll size = 0;
 
    Deque(ll length) {
        max_size = length;
        arr = new ll[length];
    }
 
    void reverse() {
        reversed = !reversed;
    }
 
    bool empty() {
        return size == 0;
    }
 
    bool full() {
        return size == max_size;
    }
 
    void push_back(ll value) {
        if (full()) {
            cout << "The Deque is full\n";
            return;
        }
        tail = (tail + 1) % max_size;
        arr[tail] = value;
        if (fronte == -1) {
            fronte = tail;
        }
        size++;
    }
 
    void push_front(ll value) {
        if (full()) {
            cout << "The Deque is full\n";
            return;
        }
        if (fronte == 0) {
            fronte = max_size;
        }
        if (fronte == -1) {
            fronte = 1;
        }
        fronte = (fronte - 1 + max_size) % max_size;
        arr[fronte] = value;
        if (tail == -1) {
            tail = fronte;
        }
        size++;
    }
 
    ll pop_front() {
        if (empty()) {
            cout << "No job for Ada?\n";
            return -1;
        }
        ll value = arr[fronte];
        fronte = (fronte + 1) % max_size;
        size--;
        if (empty()) {
            fronte = -1;
            tail = -1;
        }
        return value;
    }
 
    ll pop_back() {
        if (empty()) {
            cout << "No job for Ada?\n";
            return -1;
        }
        ll value = arr[tail];
        tail = (tail - 1 + max_size) % max_size;
        size--;
        if (empty()) {
            fronte = -1;
            tail = -1;
        }
        return value;
    }
 
    ll back() {
        if (empty()) {
            cout << "No job for Ada?\n";
            return -1;
        }
        return arr[tail];
    }
 
    ll front() {
        if (empty()) {
            cout << "No job for Ada?\n";
            return -1;
        }
        return arr[fronte];
    }
 
    ll get(int index) {
        if (empty()) {
            cout << "The Deque is empty\n";
            return -1;
        }
        return arr[(fronte + index) % max_size];
    }
 
    ll Size() {
        return size;
    }
 
    void display() {
        if (empty()) {
            cout << "The Deque is empty\n";
            return;
        }
        for (ll i = 0; i < size; i++) {
            cout << arr[(fronte + i) % max_size] << ' ';
        }
    }
 
    void toback(ll var) {
        if (reversed) {
            push_front(var);
        } else {
            push_back(var);
        }
    }
 
    void tofront(ll var) {
        if (reversed) {
            push_back(var);
        } else {
            push_front(var);
        }
    }
};
 
int main() {
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        stack<ll> st;
        stack<ll> pos;
        char c;
        ll count=0;
        for(ll i=0;i<n;i++){
            cin>>c;
            if(c=='_'){
                if(!st.empty() && st.top()=='('){
                    count+=i-pos.top();
                    st.pop();
                    pos.pop();
                }
                else{
                    st.push('(');
                    pos.push(i);
                }
            }
            else if(c=='('){
                st.push(c);
                pos.push(i);
            }
            else if(c==')'){
                if(!st.empty() && st.top()=='('){
                    count+=i-pos.top();
                    st.pop();
                    pos.pop();
                }
                else{
                    count=-1;
                    break;
                }
            }
        }
        cout<<count<<endl;
    }
}