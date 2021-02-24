#include <iostream>

using namespace std;
int main() {

    int *valeurs;
 int p = 100;




    for(int i=0 ; i<p ; i++) {
        valeurs = new int[p];
         *valeurs = (i*i);
         cout << *valeurs << endl;
         delete []valeurs;
    }


    //for(int i=0 ; i<100 ; i++) {
      //  std::cout << *valeurs << std::endl;


   // }

//    for (int i=0 ; i<100 ; i++) {
//        delete valeurs;
//
//
//    }
}