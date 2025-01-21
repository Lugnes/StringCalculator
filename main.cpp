#include <iostream>
#include <cstddef>
#include <string>



bool checkOp(char iter);
void opSelector(char iter);
void addition();
void subtraction();
void division();
void multiplication();
void opOrder(std::string usrInput);
void opSideNumbers(std::string usrInput, int opPos);




int main(){
    std::string usrInput;
    std::cout << "Yapmak istediğiniz işlemi girin: (Örnek: 1.22+(5.56-3)/12*11)\n";
    std::cin >> usrInput;
    opOrder(usrInput);
    opSideNumbers("12312+12.23*123-24.2/123*12-2", 15);







    return 0;
}

bool checkOp(char iter){
    if (iter == '+' || iter == '-' || iter == '/' || iter == '*'){
            return true;
        }
    else{
        return false;
    }
}

void opSelector(char iter){
    switch (iter){
    case '+':
        addition();
        break;
    case '-':
        subtraction();
        break;
    case '/':
        division();
        break;
    case '*':
        multiplication();
        break;
    }
}

void addition(){
}

void subtraction(){
}

void division(){
}

void multiplication(){
}

void opOrder(std::string usrInput){
    int pos_mult = 0;
    int pos_div = 0;
    while ((pos_mult = usrInput.find('*', pos_mult + 1)) != std::string::npos){
        std::cout << pos_mult << " ";
        }
    std::cout << "\n";
    while ((pos_div = usrInput.find('/', pos_div + 1)) != std::string::npos){
        std::cout << pos_div << " ";
        }


        
}

void opSideNumbers(std::string usrInput, int opPos){
    size_t posRight = usrInput.find_first_of("+-/*", opPos+1);
    size_t posLeft = usrInput.find_last_of("+-/*", opPos-1);

    std::cout << "\nRight one: " << posRight << "\nLeft one: " << posLeft << " \n";
}


