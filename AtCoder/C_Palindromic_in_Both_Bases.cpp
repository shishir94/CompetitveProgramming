#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(long long x,long long k){
    vector<long long>digit;
    while(x){
        digit.push_back(x%k);
        x/=k;
    }

    long long i = 0;
    long long j =digit.size()-1;

    while(i<j){
        if(digit[i] != digit[j]) return false;
        i++;
        j--;
    }

    return true;
}

bool isDecimalPalindrome(long long x){
    string s = to_string(x);
    long long i = 0, j = s.size() - 1;
    while(i < j){
        if(s[i++] != s[j--]) return false;
    }
    return true;
}

long long kMirror(long long k, long long n) {
    long long left = 1;
    long long ans = 0;

    while(true){
        long long right = left*10;

        for(long long l=0;l<2;l++){
            for(long long i=left;i<right;i++){
                long long cur = i;
                long long x = (l == 0 ? i / 10 : i);

                while(x){
                    cur = cur * 10 + x % 10;
                    x /= 10;
                }

                if(cur > n) return ans;

                if(isDecimalPalindrome(cur) && ispalindrome(cur, k)){
                    ans += cur;
                }
            }
        }
        left = right;
    }

    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long k,n;
    cin>>k>>n;

    cout<<kMirror(k,n)<<endl;
    return 0;
}
