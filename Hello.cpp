/*

\`\   /`/```\     ncknm:   Ivan 'van2zeer' Ilyakov
 \ \_/ / === \    cf:      https://codeforces.com/profile/karginux
  \   / ===== \   gh:      https://github.com/van2zeer1
   \_/_/     \_\  vk:      https://vk.com/gnu_go

*/

#include <bits/stdc++.h>
using namespace std;

// def //   short    //  var  //
 
#define     i64         long long
#define     i32         int
#define     i16         short
#define     i8          char
#define     u64         unsigned long long
#define     u32         unsigned
#define     u16         unsigned short
#define     u8          unsigned char
 
#define     vec         vector
#define     vi          vec<i32>
#define     vl          vec<i64>
#define     vc          vec<i8>
 
#define     elif        else if
#define     w(i)        while((i)--)
#define     f(i, n)     for(i32 (i) = 0; (i) < (n); (i)++)

#define     Danil       Lapokin
#define     Alexey      Korovin

/* ================================== */  

namespace go
{
	template<typename T>
	T gcd(T a, T b) { return b == 0 ? a : go::gcd(b, a % b); }
}

i32 main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifdef _DEBUG 
	    freopen("io/i.log", "r", stdin);
	    freopen("io/o.log", "w", stdout);
    #endif
    cout << "Hello world";
}

