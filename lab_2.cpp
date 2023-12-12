#include <stdlib.h>
#include <iostream>

// este declarata o structura cu 2 campuri;
struct TwoInts
{
    int a;
    int b;
};
// este declarata o structura cu un array si adresa;
struct StructWithArray
{
    int arr[4];
    int* someNumber;
};

int main()
{
    // este creata variabila de tip twoints si initializata cu zero;
    // variabilele din structura twoints sunt initializate respectiv cu 5 si 7;
    TwoInts i2 = { };
    i2.a = 5;
    i2.b = 7;

// in consola va fi afisat 5 si 7;
    std::cout << i2.a << std::endl;
    std::cout << i2.b << std::endl;
    
// este creata variabila de tip structwitharray si initializata cu zero;
// prima variabila din array este initializata cu 10;
    StructWithArray s = { };
    s.arr[0] = 10;
// creata inca o variabila de acelasi tip;
// prima variabila initializata cu 15;
    StructWithArray s1 = { };
    s1.arr[0] = 15;
// este creat un pointer care se adreseaza la variabila s;
// din pointer se adreseaza la prima variabila si se initializeaza cu 20;
    StructWithArray* sPointer = &s;
    (*sPointer).arr[0] = 20;
// in consola se va afisa 20;
// valoarea primei variabile se initializeaza cu 25;
// in consola se va afisa 25;
// din pointer se adreseaza la aceeasi variabila si se seteaza la 30;
// se afiseaza 30;
    std::cout << s.arr[0] << std::endl;
    s.arr[0] = 25;
    std::cout << s.arr[0] << std::endl;
    sPointer->arr[0] = 30;
    std::cout << s.arr[0] << std::endl;
// se adreseaza la prima valoare din arrayul s1 si se seteaza la 35;
// se afiseaza 30 si 35
    sPointer = &s1;
    sPointer->arr[0] = 35;
    std::cout << s.arr[0] << std::endl;
    std::cout << s1.arr[0] << std::endl;
// se initializeaza un array de tip structwitharray si este setat cu zero
// valoarea variabilei 4 din primul element al arrayului este setata cu 77;
// pointerul someNumber este setat din al doilea element al arrayului sa se adreseze la variabila 4 al primului element
    StructWithArray structArray[2] = { };
    structArray[0].arr[3] = 77;
    structArray[1].someNumber = &structArray[0].arr[3];
// se adreseaza la prima valoare din arrayul s
 // este creat un pointer care se adreseaza la variabila 4 al array-ului la care se adreseaza sPointer
 // valoarea variabilei 4 este setata cu 72;
 // se afiseaza 72
    sPointer = &s;
    int* pointer = &sPointer->arr[3];
    s.arr[3] = 72;
    std::cout << *pointer;
// se initializeaza variabila memory de tip structwitharray;
// toate valorile sunt setate cu 0 cu ajutorul functiei memset (deci, este creata variabila ce contite toate elementele structwitharray setate cu 0)
    StructWithArray memory;
    memset(&memory, 0, sizeof(StructWithArray));
    return 0;
}