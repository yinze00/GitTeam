#include <iostream>
using namespace std;
void func(int i){
    const int* a = new int[10];
    cout << "the int* pointer a is established" << endl;
}
int main(){
    cout << "hello" << endl;

    cout << "world" << endl;
    func(12);
    return 0;
}