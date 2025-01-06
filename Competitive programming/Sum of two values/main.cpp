#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // map pt valori si indici
    map<int, int> seen;
    for (int i = 0; i < n; i++) {
        int complement = x - a[i]; // calculez complementul
        
        // verific complement in map si afisez indicii
        if (seen.find(complement) != seen.end()) {
            cout << seen[complement] + 1 << " " << i + 1 << endl;
            return 0;
        }
        
        // daca nu exista salvez nr curent in map
        seen[a[i]] = i;
    }

    // nu s-a gasit nicio pereche
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
