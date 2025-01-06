#include <iostream>
#include <fstream>
#include <set>
#include <iterator>
constexpr int nMAX = 100000; // dim maxima din cerinta

using namespace std;

ifstream fin("third.in");
ofstream fout("third.out");

int n, k;
int v[nMAX + 1];
long long sum;
multiset<int> m;

int main()
{
    if (!fin.is_open() || !fout.is_open()) {
        cerr << "Eroare la deschiderea fisierelor" << endl; // check daca este vreo problema cu fisierele
        return 1;
    }

    fin >> n >> k;
    for (int i = 1; i <= n; ++i)
        fin >> v[i];
    
    // multiset pt primele k elemente
    for (int i = 1; i <= k; ++i)
        m.insert(v[i]);
    sum = *next(next(m.begin())); // al 3-lea element din multiset

    // restul elementelor
    for (int i = k + 1; i <= n; ++i)
    {
        m.insert(v[i]);                 
        m.erase(m.lower_bound(v[i-k])); 
        sum += *next(next(m.begin()));  
    }

    fout << sum;
    return 0;
}
