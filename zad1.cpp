#include <iostream>

using namespace std;


int fun(int n){
    int r=0;
    
    for (int i=0; i<n; i++){            //N powtórzeń, gdzie n jest argumentem funkcji -> n 
        for (int j=0; j<=i; j++){       //ilość powtrórzeń zależy od tego, w której iteracji pierwszej pętli się znajdujemy -> i+1
            for (int k=1; k<6; k++){    //stała ilość powtórzeń -> 5 - inaczej oznacz, że ta pętla dodaje liczbę 5
                r++;
            }
        }
        
    }
    
    /*Dla n=3 
    * wynik = 5*(1 + 2 + 3)
    * wynik = 5 + 10 + 15
    *
    *Wynikiem zawsze jest liczba podzielna przez 5 
    *
    */
    
    return r;
    
}

int main()
{
    cout << fun(5) << endl;

    return 0;
}
