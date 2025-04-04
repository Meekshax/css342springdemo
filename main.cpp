#include <iostream>
using namespace std;

/* Part of exercise one */
bool is_power_of_2(int num){
    while (num!=1) {
        if (num%2==0){
            num=num/2;
            continue;
        }
        else {
            return false;
        }
    }
    return true;
}
 /* Part of exercise two */
bool is_prime_number(int num){
    if(num == 0 || num == 1){ //prime number cannot be 0 or 1
        return false;
    }
    for(int i = 2; i <= num/2; ++i ){
        if(num%i == 0){
            return false;
            break;
        }
    }
    return true;
}

int main(){
    /* Exercise one*/
    cout << "Pleaser enter a number: " << endl;
    int num;
    cin >> num;
    bool result = is_power_of_2(num);
    if(result == true){
        cout << "The given number is a power of 2";
    } else {
        cout << "The given number is not a power of 2";
    }

    /* Exercise two */
    int num = 11;
    bool result = is_prime_number(num);
    if(result == true){
        cout << "Pass!" << endl;
    } else {
        cout << "Fail!" << endl;
    }

    /* Exercise three */




    return 0;
}


