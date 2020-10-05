#include <cmath>
#include <iostream>
#include <string>
using namespace std;

bool check_polindrom(string word)
{
    int len = word.length();
    for (int i = 0; i < len / 2; ++i)
    {
        if (word[i] != word[len - i - 1])
        {
            return false;
        }
    }
    return true;
}
int main1(string word) {


    if (check_polindrom(word))
    {
        cout << "Word is polindrom."<< endl;
    }
    else
    {
        cout << "Word is not polindrom"<< endl;
    }
    return 0;
}

int main()
{
    string n;
    cin >> n;
    main1(n); // task 10
    string g;
    cin >> g;
    cout << "Hello, " << g << "! My name is C++" << endl; // task 9
    double r1;
    cin >> r1;
    cout << 2 * r1 << endl; // 8 task
    double k;
    cin >> k;
    cout << 4 * k << endl; // 7 task
    double e, vk, sk;
    cin >> e;
    cout << pow(e, 3) << "  " << 6 * e * e << endl; // 6 task
    double R, r, s1, s2;
    cin >> R >> r;
    s1 = 3.14 * pow(R, 2);
    s2 = 3.14 * pow(r, 2);
    cout << s1-s2<< endl; // 5 task
    double h1, o1, o2, t, q, P;
    cin >> h1 >> o1 >> o2;
    q = (o1 - o2) / 2;
    t = sqrt(h1 * h1 + q*q) ;
    P = 2 * t + o1 + o2;
    cout << P << endl; // 4 task
    double xa, ya, xb, yb, X, Y, S;
    cin >> xa >> ya >> xb >> yb;
    X = xb - xa;
    Y = yb - ya;
    S = sqrt(X * X + Y * Y);
    cout << S << endl; // 3 task 
    double a1, b1, x2;
    cin >> a1 >> b1;
    x2 = (-b1) / a1;
    cout << x2 << endl; // 2 task
    double p, M, V;
    cin >> M >> V;
    p = M / V;
    cout << p<< endl; // 1 task 
    cout << 1 << " " << 13 << " " << 49; // 1st task
    string o;
    cin >> o;
    cout << 1 << o << 13 << 0 << 49; // 2nd task
    int s, v, f;
    cin >> s>> v >> f;
    cout << s << "  " << v << "  " << f; // 3d task
    int a, x;
    cin >> a;
    x = 12 * a * a + 7 * a - 12;
    cout << x; // 4.1 task
    int x1, y;
    cin >> x1;
    y = 3 * x1 * x1 * x1 + 4 * x1 * x1 - 11 * x1 + 1; // 4.2 task
    cout << y;

    return 0;
}

