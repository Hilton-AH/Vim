//Give an O(n2) algorithm for computing C = (xy^t)^k, where x and y are n-vectors.

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

class transpose {
    public:
        vector<vector<int> > transpose(vector<vector<int> > &C) {
            vector<vector<int> > C1(C.size(), vector<int>(C.size()));
            for (int i = 0; i < C.size(); i++) {
                for (int j = 0; j < C.size(); j++) {
                    C1[i][j] = C[j][i];
                }
            }
            return C1;
        }
};

class multiply {
    public:
        vector<vector<int> > multiply(vector<vector<int> > &C, vector<vector<int> > &C1) {
            vector<vector<int> > C2(C.size(), vector<int>(C.size()));
            for (int i = 0; i < C.size(); i++) {
                for (int j = 0; j < C.size(); j++) {
                    for (int k = 0; k < C.size(); k++) {
                        C2[i][j] += C[i][k] * C1[k][j];
                    }
                }
            }
            return C2;
        }
};

class power {
    //Give an O(n2) algorithm for computing C = (xy^t)^k, where x and y are n-vectors.
    public:
        vector<vector<int> > power(vector<vector<int> > &C, int k) {
            for (int i = 0; i < k - 1; i++) {
                vector<vector<int> > C1(C.size(), vector<int>(C.size()));
                multiply m;
                C1 = m.multiply(C, C);
                C = C1;
            }
            return C;
        }
};

class input {
    //Give an O(n2) algorithm for computing C = (xy^t)^k, where x and y are n-vectors.
    public:
        vector<vector<int> > input(int n) {
            vector<vector<int> > C(n, vector<int>(n));
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    cin >> C[i][j];
                }
            }
            return C;
        }
};

class output {
    //Give an O(n2) algorithm for computing C = (xy^t)^k, where x and y are n-vectors.
    public:
        void output(vector<vector<int> > &C) {
            for (int i = 0; i < C.size(); i++) {
                for (int j = 0; j < C.size(); j++) {
                    cout << C[i][j] << " ";
                }
                cout << endl;
            }
        }
};

int main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int> > C(n, vector<int>(n));
    input i;
    C = i.input(n);
    transpose t;
    C = t.transpose(C);
    C = i.input(n);
    power p;
    C = p.power(C, k);
    output o;
    o.output(C);
    return 0;
}


