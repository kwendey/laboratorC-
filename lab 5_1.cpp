#include <iostream>
#include <string> // Pentru lucrul cu std::string
// cream clasa gender.
enum class Gender { Male, Female };
//inauntru clasei cream un construct ce contine minim 3 campuri
// campul std::string name desemneaza un string care are valoare flexibila de caractere, nespecificata. 
struct Person {
    std::string name; // Utilizare std::string pentru nume
    int age;
    // campul enum class
    Gender gender;
};
// exemplu de utilizare a constructului
int main() {
    Person person;

    // initializarea si utilizarea a structurii Person
    person.name = "Chipi chipi chapa chapa";
    person.age = 20;
    person.gender = Gender::Male;

    // afisarea campurilor, se vor afisa datele ce au fost scrise mai in sus
    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;
    std::cout << "Gender: " << person.gender << std::endl;

    return 0;
}

// logica este putin asemanatoare cu logica din clasele c#, asa ca nu a fost asa de greu punctul 1. 