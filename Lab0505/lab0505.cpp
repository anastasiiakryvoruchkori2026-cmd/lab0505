// 16 варіант

#include <iostream>

using namespace std;

double a(int n, double a1, double d, int level, int &depth);
double S(int n, double a1, double d, int level, int &depth);

int main() {

    double a1, d;
    int n;

    cout << "a1 = "; cin >> a1;
    cout << "d = "; cin >> d;
    cout << "n = "; cin >> n;

    int deptha = 0;
    int depthS = 0;

    double an = a(n, a1, d, 1, deptha);
    double Sn = S(n, a1, d, 1, depthS);

    cout << "an = " << an << endl;
    cout << "depth a = " << deptha << endl;
    cout << "Sn = " << Sn << endl;
    cout << "depth S = " << depthS << endl;

    return 0;
}


double a(int n, double a1, double d, int level, int &depth) {
    if (level > depth) {
        depth = level;
    }
    if (n == 1) {
        return a1; 
    }
    return a(n - 1, a1, d, level + 1, depth) + d; 
}

double S(int n, double a1, double d, int level, int& depth) {
    if (level > depth) {
        depth = level;
    }
    if (n == 1) {
        return a1;
    }

    return S(n - 1, a1, d, level + 1, depth) + (a1 + (n - 1) * d);
}