
#include <iostream>
#include <Lib.h>

using namespace std;

int main() {
    //you must change/expand this code

    cout << "n,TA(n),TB(n),TC(n),log(n),log(TA),log(TB),log(TC)" << endl;
    double TA,TB,TC, log_n, log_TA, log_TB, log_TC;

    for(int n = 100; n <= 3000; n+= 100) {
        log_n = log2(n);

        // ALGO A
        auto start = chrono::steady_clock::now();
                Lib::algorithmA(n);
        auto end = chrono::steady_clock::now();

        TA = chrono::duration_cast<chrono::milliseconds>(end - start).count();
        log_TA = log2(TA);

        // ALGO B
        start = chrono::steady_clock::now();
        Lib::algorithmB(n);
        end = chrono::steady_clock::now();

        TB = chrono::duration_cast<chrono::milliseconds>(end - start).count();
        log_TB = log2(TB);

        // ALGO C
        start = chrono::steady_clock::now();
        Lib::algorithmC(n);
        end = chrono::steady_clock::now();

        TC = chrono::duration_cast<chrono::milliseconds>(end - start).count();
        log_TC = log2(TC);

        cout << n << ',' << TA << ',' << TB << ',' << TC << ',' <<  log_n <<
        ',' << log_TA << ',' << log_TB << ',' << log_TC << endl;
    }
    cout << "Successful execution" <<endl;
    return 0;
}