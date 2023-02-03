//pass by pointer 
#include <iostream>
using namespace std;

void func(int *x, int*y){
    *x = 3;
    *y = 4;
}

int main(){
    int a = 1; b = 2;
    cout << "Before func()"; // 1 2
    func(a, b);
    cout << "After func()"; // 3 4 
}

//practice pointing
int main(){
    int x=2, y=3;
    int *px = &x, *py=&y, *s;
    s=py;
    py=px;
    *px = *py+2; //replaces what px is pointing to with what py is pointing to and add 2

    cout << x << y << *s << *px << endl;
    //      4    3     3     4
}

//dynamic memory 
int *createArray(){
    int arr_ca[2];  //int arr_ca[2] = new int[2]; //would create arr in heap so you can access when arr_ca is returned
    arr_ca[0] = 50;
    arr_ca[1] = 100;
    return arr_ca;   //arr_ca gets deleted from stack when returned 
}

//array doubling 
int main(int argc, char* argv[]){
    int numTimesDoubled;
    int size = 5;
    int *arr1 = new int[size] {11, 12, 13, 14, 15};
    int *arr2;
    //read from file into arr1 and check if size has been reached 
    //if so, create arr2 (which is double the size) and copy arr1 to arr2
    int newSize = size*2;
    arr2 = new int[newSize];
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
        cout << "arr1: " << arr1[i] << endl;
    }
    delete[] arr1;
    arr1 = arr2;
    numTimesDoubled++;

    for(int j = 0; j < newSize; j++){
        arr2[j] = arr1[j];
        cout << "arr1: " << arr1[j] << endl;
    }

}
