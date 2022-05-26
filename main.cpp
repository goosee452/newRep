#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int multsQuant = 0;
    long long int number = 0;
    cin >> number;
    long long int numberCopy = number;
    int div = 2;

    while(numberCopy != 1){
        while(numberCopy % div != 0 && div < numberCopy && div <= 9){
            div++;
        }
        if(numberCopy % div != 0){
            cout << -1;
            return 0;
        }
        numberCopy = numberCopy / div;
    multsQuant++;
    }

    numberCopy = number;
    div = 2;
    int* divs = new int[multsQuant];

    for(int i = 0; i < multsQuant; i++){
        while(numberCopy % div != 0 && div < numberCopy){
            div++;
        }

        numberCopy = numberCopy / div;
        divs[i] = div;
    }

     for(int i = 0; i < multsQuant; i++){
            cout << divs[i];
     }

     for(int i = multsQuant; i > 0; i--){
        if(divs[i] * divs[i - 1] < 10){
            divs[i - 1] = divs[i] * divs[i - 1];
            divs[i] = 1;
        }
     }

     for(int i = 0; i < multsQuant; i++){
            cout << divs[i];
     }



    delete[] divs;
    return 0;
}
