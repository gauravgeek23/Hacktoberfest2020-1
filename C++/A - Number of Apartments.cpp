    #include<bits/stdc++.h>
    #include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
     
    #define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define printclock cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n"
    #define MAX 1000000
    #define mod 1000000007
    #define ll long long int
    #define ld long double
    #define ull unsigned long long
    #define li long int
    #define str string
    #define fr(i,n) for(ll i = 0; i<n; i++)
    #define frj(j,i,n) for(ll j = i; j<n; j++)
    #define frev(i,n) for(ll i = n-1; i>=0; i--)
    #define all(x) x.begin(),x.end()
    #define debug(x) cout << #x << " " << x << endl;
    #define println(x) cout << x << "\n";
    #define print(x) cout << x << " ";
    #define printCase(x) cout << "Case #" << x << ": ";
    #define umax(a, b) a=max(a,b);
     
    template<class A> void read(vector<A>& v);
    template<class T> void read(T& x) {
        cin >> x;
    }
    void read(double& d) {
        string t;
        read(t);
        d=stod(t);
    }
    void read(long double& d) {
        string t;
        read(t);
        d=stold(t);
    }
    template<class H, class... T> void read(H& h, T&... t) {
        read(h);
        read(t...);
    }
     
    template<class A> void write(A x) {
        cout << to_string(x);
    }
    template<class H, class... T> void write(const H& h, const T&... t) { 
        write(h);
        write(t...);
    }
     
    void solve() {
        
        ll n;
        read(n);
     
        if (n == 1 || n== 2 || n == 4) {
            cout << -1 << endl;
        }
        else {
            int a(0),b(0), c(0);
            if (n%3 == 0) {
                a = n/3;
            }
            else if (n%5 == 0) {
                b= n/5;
            }
            else if (n%7 == 0) {
                c = n/7;
            }
            else {
                if (n%3 == 1) {
                    c=1;
                    n-=7;
                    a=n/3;
                }
                else if (n%3 == 2){
                    b=1;
                    n-=5;
                    a=n/3;
                }
     
            }
            cout <<a <<" " << b << " " << c << endl;
        }
     
     
    }   
     
    int main() {
        
        fastio;
        
        //Skipped in presense of online judge.
        #ifndef ONLINE_JUDGE
        freopen("D:/Competitive/inputf.in","r",stdin);
        freopen("D:/Competitive/outputf.in","w",stdout);
        #endif
        
        int t(1);
        cin >> t;
     
        frj(i, 1, t+1) {
            // printCase(i);
            solve();
        }
        
        return 0;
        
    }
