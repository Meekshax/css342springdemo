#include <iostream>
#include <string>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
void test();
class Fraction;



class Fraction {
    public:
    int numerator;
    int denominator;

    Fraction(int numerator, int denominator): numerator(numerator), denominator(denominator) { }


};

Fraction reduce(Fraction input); //a/b fraction

int main() {
    test();
    Fraction num1(2, 4 );
    std::cout << num1.to_string() << std::endl;
    return 0;
}
void test(){
    //Reduce given fraction to minimum terms.
    //e.g. 2/4 -> 1/2   6/6 -> 1/1   1/0 -> 0(error)
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.