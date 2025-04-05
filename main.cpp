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

 /* Part of Exercise three*/
int greatestCommonDivider(int x, int y) { //Researched the Euclidean algorithm for this

    while(y!=0) {
        int temp = y;
        y = x % y; //Until remainder is 0
        x = temp;
    }
    return x;
}
void reduceFraction(int num, int den) {
    if (den == 0) {
        cout << "Denominator cannot be 0." << endl;
    }

    int divisor = greatestCommonDivider(abs(num), abs(den)); //The abs() function is used because my research said that this number should be positive

    num /= divisor; //Dividing the numerator and denominator by the greatest common divider gives us the fraction in its most reduced form
    den /= divisor;

    if (den < 0) { //Ensure that denominator is never negative and also if both are negative it cancels out
        num = -num;
        den = -den;
    }
    cout << "The reduced fraction is: " << num << "/" << den << endl;

}

int main(){
    /* Exercise one*/
    cout << "Pleaser enter a number: " << endl;
    int potentialPowerNum;
    cin >> potentialPowerNum;
    bool powerResult = is_power_of_2(potentialPowerNum);
    if(powerResult == true){
        cout << "The given number is a power of 2" << endl;
    } else {
        cout << "The given number is not a power of 2" << endl;
    }

    /* Exercise two */
    cout << "Please enter a number: " << endl;
    int potentialPrimeNum;
    cin >> potentialPrimeNum;
    bool primeResult = is_prime_number(potentialPrimeNum);
    if(primeResult == true){
        cout << potentialPrimeNum << ": Pass!" << endl;
    } else {
        cout << potentialPrimeNum << ": Fail!" << endl;
    }

    /* Exercise three */
    cout << "Please enter a number for a numerator: " << endl;
    int numerator;
    cin >> numerator;
    cout << "Please enter a number for a denominator: " << endl;
    int denominator;
    cin >> denominator;

    reduceFraction(numerator, denominator);



    return 0;
}


