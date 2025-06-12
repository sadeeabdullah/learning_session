#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    int jersey_no;
    string country;

    
};
int main()
{
    Cricketer* dhoni = new Cricketer;

    dhoni->country = "india";
    dhoni->jersey_no = 17;
    // Cricketer* dhoni = new Cricketer(17,"india");


    Cricketer* kohli = new Cricketer;
    // kohli->country = dhoni->country;
    // kohli->jersey_no = dhoni->jersey_no;

    //derefference and set
    *kohli = *dhoni;

    delete dhoni;

    cout << kohli->country << "\n" << kohli->jersey_no;
    
    return 0;
}