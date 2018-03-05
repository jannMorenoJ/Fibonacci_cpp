#include <iostream>

using namespace std;



unsigned short int fibonnacci_short(){
                unsigned short int fib = 1;
                unsigned short int prevFib = 1;
                int i=1;
                while(true) {
                    unsigned short int temp = fib;
                    if((fib+prevFib)<= 65536){
                        fib+= prevFib;
                        prevFib = temp;
                        i++;
                    }else{
                        cout<<"the n term of fibonacci sequence before the overflow is: "<<endl;
                        return i;
                    }

                }
}
unsigned int fibonnacci_int(){
                unsigned int fib = 1;
                unsigned int prevFib = 1;
                int i=1;|
                while(true) {
                    unsigned int temp = fib;
                    if((fib+prevFib)<= INT_MAX){
                        fib+= prevFib;
                        prevFib = temp;
                        i++;
                    }else{
                        cout<<"the n term of fibonacci sequence before the overflow is: "<<endl;
                        return i;
                    }

                }
}
unsigned long int fibonnacci_long(){
                unsigned int fib = 1;
                unsigned int prevFib = 1;
                int i=1;
                while(true) {
                    unsigned int temp = fib;
                    if((fib+prevFib)<= LONG_MAX){
                        fib+= prevFib;
                        prevFib = temp;
                        i++;
                    }else{
                        cout<<"the n term of fibonacci sequence before the overflow is: "<<endl;
                        return i;
                    }

                }
}
unsigned long long int fibonnacci_long_long(){
                unsigned long long int fib = 1;
                unsigned long long int prevFib = 1;
                int i=1;
                while(true) {
                    unsigned long long int temp = fib;
                    if((fib+prevFib)<= LONG_LONG_MAX){
                        fib+= prevFib;
                        prevFib = temp;
                        i++;
                    }else{
                        cout<<"the n term of fibonacci sequence before the overflow is: "<<endl;
                        return i;
                    }

                }
}

main(){
    cout<<"select the Type:\n";
    cout<<"1) short int (unsigned)"<<endl;
    cout<<"2) int (unsigned)"<<endl;
    cout<<"3) long int (unsigned)"<<endl;
    cout<<"4) long long int (unsigned)"<<endl;
    cout<<"--------------------------------------------"<<endl;
    int x;
    cin>>x;
    switch(x){
        case 1:
            cout<<fibonnacci_short()<<endl;
            cout<<"--------------------------------------------"<<endl;
            main();
        break;
        case 2:
            cout<<fibonnacci_int()<<endl;
            cout<<"--------------------------------------------"<<endl;
            main();
        break;
        case 3:
            cout<<fibonnacci_long()<<endl;
            cout<<"--------------------------------------------"<<endl;
            main();
        break;
        case 4:
            cout<<fibonnacci_long_long()<<endl;
            cout<<"--------------------------------------------"<<endl;
            main();
        break;
        default:
            return 0;
        break;

		}
}
