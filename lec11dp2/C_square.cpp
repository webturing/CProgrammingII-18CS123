#include<bits/stdc++.h>

using namespace std;

//ƽ���㷨 1��ֻ�ܽ��n<=10000
int main() {
    int n = 10005;
    for (int i = 1; i <= n / 2; i++) {
        for (int j = i + 1; j <= n; j++) {
            int s = (i + j) * (j - i + 1) / 2;
            if (s == n) {
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}
