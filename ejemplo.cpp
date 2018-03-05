#include <iostream>

using namespace std;
    unsigned short int fibonnacci_short1(){
                unsigned short int fib = 1;
                unsigned short int prevFib = 1;

                while(true) {
                    unsigned short int temp = fib;

                        cout<<fib<<endl;
                        fib+= prevFib;
                        prevFib = temp;

                }
}
main1(){
cout<<fibonnacci_short1();

}
