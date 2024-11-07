#include <iostream>

bool isPointerNull(int* ptr= nullptr) {
    // Your code here
    if(ptr == nullptr){
        return true;
    }else {
        return false;
    }
}

void overloadedFunction(int val) {
    // Your code here
    std::cout << "Integer Value\n";
}

void overloadedFunction(int* ptr) {
    // Your code here
    if(isPointerNull(ptr)){
        std::cout<< "Pointer Value (Null)\n";
    }else {
        std::cout<< "Pointer Value\n";
    }
}