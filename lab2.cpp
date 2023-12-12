

int main() {
    int i;
    i = 69;
    int number = 72;
    i = i+number;
    int group[3]{};
    int* iPointer = &i;
    number = *iPointer;
    *iPointer = 15;
    i = 15;
    iPointer = &group[0];
    iPointer = iPointer + 2;
    group[0] = 5;
    *iPointer = 6; 


    return 0;
}