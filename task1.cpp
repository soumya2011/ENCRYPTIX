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
#include <random> 

using namespace std;
typedef signed long long ll;
typedef unsigned long long ull;
#define endl "\n"

void solve(){
    random_device rand;  
    mt19937 gen(rand());  
    uniform_int_distribution<> dis(1, 100); 
    int random_number = dis(gen);
    cout << "Random number is generated." << endl;
    int f=0;
    while(f==0){
        cout << "Enter a number to guess it: ";
        int guess;
        cin >> guess;
        
        if(guess < random_number){
            cout << "Guess is too low" << endl;
        }
        else if(guess > random_number){
            cout << "Guess is too high" << endl;
        }
        else if(guess == random_number){
            cout << "Congrats, your guess is correct!" << endl;
            f=1;
            break;
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    
}
