#include <iostream>
#include <math.h>

using namespace std;


//Algorytm "Dziel i zwyciężaj" polega na znalezieniu indeksu elementu o podanej wartości 
//w podanej posegregowanej tablicy 

int divide_and_conqure(int A[], int p, int r, int v){
    // p, r  ->  wyznaczają zakres poszukiwań 
    // Standardowo w tablicy p=0, czyli początek tablicy 
    //natomiast r to ostatni element tablicy, np r = sizeof(A)/sizeof(A[0]) - 1 Taki zabieg działa w C 
    //nie jestem pewien czy w C++ też 
    
    //Jak przeglądałem przesłany przykład to wychodzi na to, że r = sizeof(A)/sizeof(A[0]) coś w tym stylu 
    //bez "-1" po prostu
    
    //Mamy dwie możliwości napisanie tego algorytmu - rekurencyjnie lub iteracyjnie
    
    //Rekurencja 
    
    int indeks;
    
    if (p <= r){     //Prawidłowy zakres
        indeks = floor((p+r-1)/2);
        
        if (v <= A[indeks]){
            return divide_and_conqure(A, p, indeks, v);
        }
        else if (v > A[indeks]){
            return divide_and_conqure(A, indeks + 1, r, v);
        }
        else if (v == A[p]) {
            return p;
        }
        else{
            return NULL;
        }
    }
    
    
}

int main()
{
    int A[9] = {0, 1, 4, 5, 10, 12, 17, 23, 30};
    
    cout<<divide_and_conqure(A, 0, 8, 10)<<endl;

    return 0;
}

