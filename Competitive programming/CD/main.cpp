#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int n, m;

    while (cin >> n >> m && n != 0 && m != 0) {
        unordered_set<int> jack;  // cd-uri jack
        int common = 0; // cd-uri comune
        int cd;

        // se adauga cd-urile in set
        for (int i = 0; i < n; i++) {
            cin >> cd;
            jack.insert(cd);
        }

        // se verifica daca sunt cd-uri comune la jill si se afiseaza nr
        for (int i = 0; i < m; i++) {
            cin >> cd;
            if (jack.count(cd))  common++;
        }

        cout << common << endl;
    }

    return 0;
}