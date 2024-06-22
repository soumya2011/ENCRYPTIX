#include <iostream>
#include <iostream>
#include <numeric>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <utility>
#include <cmath>
#include <cstring>
#include <string>
#include <bitset>
#include <deque>
#include <list>
#include <iterator>
#include <array>

using namespace std;
typedef signed long long ll;
typedef unsigned long long ull;
#define endl "\n"


void solve(){
    double num1,num2;
    char op;
    cout<<"Enter number 1 : ";
    cin>>num1;
    cout<<"Enter number 2 : ";
    cin>>num2;
    cout<<"Enter arithematic operation you want to perform : ";
    cin>>op;
    double ans;
    switch (op)
    {
    case '+':
        ans=num1+num2;
        cout<<"The answer is : "<<ans<<endl;
        break;
    case '-':
        ans=num1-num2;
        cout<<"The answer is : "<<ans<<endl;
        break;
    case '*':
        ans=num1*num2;
        cout<<"The answer is : "<<ans<<endl;
        break;
    case '/':
        ans=num1/num2;
        cout<<"The answer is : "<<ans<<endl;
        break;
    
    default:
    cout<<"Incorrect Operation"<<endl;
        break;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}