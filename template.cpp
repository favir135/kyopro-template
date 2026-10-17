// https://github.com/favir135/kyopro-template/blob/master/template.cpp

#ifndef ONLINE_JUDGE
#define _GLIBCXX_DEBUG
#endif
// 基本・入出力
#include <cassert>
#include <cfloat>
#include <chrono>
#include <climits>
#include <iomanip>
#include <iostream>

// コンテナ
#include <array>
#include <deque>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// アルゴリズム・数学・構造
#include <algorithm>
#include <bitset>
#include <cmath>
#include <complex>
#include <functional>
#include <numeric>
#include <random>
#include <tuple>
#include <utility>

// 現代C++の便利機能 (C++20/23環境)
#include <bit>
#include <ranges>
#if __cplusplus >= 202302L
#include <stdfloat>
#endif
#include<atcoder/modint>
#define int long long
#define endl '\n'  // インタラクティブの時は外す！！！！！
#define all(a) (a).begin(), (a).end()
#define GET_MACRO(_1, _2, _3, _4, NAME, ...) NAME
#define REP0(n)                                                \
    for(int __rep_loop_num__ = 0; __rep_loop_num__ < (int)(n); \
        __rep_loop_num__++)  // 入れ子禁止！！！  ！
#define REP1(i, n) for(int i = 0; i < (int)(n); i++)
#define REP2(i, a, b) for(int i = (int)(a); i < (int)(b); i++)
#define REP3(i, a, b, c) for(int i = (int)(a); i < (int)(b); i += (int)(c))
#define rep(...) GET_MACRO(__VA_ARGS__, REP3, REP2, REP1, REP0)(__VA_ARGS__)
#define lambda(expr, ...) [&](__VA_ARGS__) { return (expr); }
using namespace std;
using namespace atcoder;
using pii = pair<int, int>;
using vvi = vector<vector<int>>;
using ai2 = array<int, 2>;
using ai3 = array<int, 3>;
template <typename T>
concept IsModInt = same_as<T, modint> || same_as<T, modint1000000007> || same_as<T, modint998244353>;
template <IsModInt T>
ostream& operator<<(ostream& os, const T& m) {
    os << m.val();
    return os;
}
template <IsModInt T>
ostream& operator>>(ostream& os, T& m) {
    int i;
    cin >> i;
    m = T(i);
    return os;
}
template <typename T>
void print_vec(T& v) {
    bool flg = false;
    for(auto s : v) {
        if(!flg)
            flg = true;
        else
            cout << ' ';
        cout << s;
    }
    cout << endl;
}
template <typename T>
vector<T> vec_input(int N) {
    vector<T> ans(N);
    for(int i = 0; i < N; i++) {
        cin >> ans.at(i);
    }
    return ans;
}
template <typename T>
void seg_debug(int N, T seg) {
    for(int i = 0; i < N; i++) {
        cerr << seg.get(i).value << ' ';
    }
    cerr << endl;
}
template <class T>
vector<T> m_f = {1};
template <class T>
T fact(int N) {
    for(int i = m_f<T>.size(); i <= N; ++i) m_f<T>.push_back(m_f<T>.back() * i);
    return m_f<T>[N];
}
template <typename T>
T comb(int a, int b) {
    return (a >= 0 && b >= 0 && b <= a) ? (fact<T>(a) / fact<T>(a - b) / fact<T>(b)) : 0;
}
// 多次元 vector 生成用のヘルパー関数
auto make_vec(size_t n, auto init) {
    return vector(n, init);
}
template <typename... Args>
auto make_vec(size_t n, Args... args) {
    return vector(n, make_vec(args...));
}
long long ipow(long long base, int exp) {
    long long result = 1;
    while(exp > 0) {
        if(exp & 1) result *= base;
        base *= base;
        exp >>= 1;
    }
    return result;
}
void Yes() {
    cout << "Yes" << endl;
}
void No() {
    cout << "No" << endl;
}
int nibutan(int ok, int ng, auto judge) {
    while(abs(ok - ng) > 1) (judge((ok + ng) / 2) ? ok : ng) = (ok + ng) / 2;
    return ok;
}
using mint = modint998244353;
int K, L, M, N, Q;
vector<int> A, B, P;
string S, T;

void solve() {
    
}
signed main() {
    bool is_multi_case = 0;
#ifndef ONLINE_JUDGE
#endif
    if(is_multi_case) {
        int _;
        cin >> _;
        rep(_) solve();
    } else
        solve();
#ifndef ONLINE_JUDGE
    char _____;
    cin >> _____;
#endif
}
