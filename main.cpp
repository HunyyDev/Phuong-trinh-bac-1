#include <bits/stdc++.h>
#define delta(a, b, c) b*b-4*a*c
#define vn "Ø"
#define vsn "ℝ"
//https://khmt.uit.edu.vn/wecode/truonganpn/assignment/30/119

using namespace std;

double a,b;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin>>a>>b;
    if (a==0 && b==0) {
        cout<<vsn;
        return 0;
    }
    if (a==0 && b!=0) cout<<vn;
    if (a!=0 && b==0) cout<<"{0}";
    if (a!=0 && b!=0) cout<<"{"<<-b/a<<"}";
    return 0;
}
