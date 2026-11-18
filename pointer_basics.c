#include<stdio.h>
int main() 
{
    int age = 25;        
    int *ptr = &age;     

 //differencing between age and &age
    printf("Value of age: %d\n", age);
    printf("Address of age: %p\n", &age);

  //differencing between ptr and *ptr
    printf("Address stored in ptr: %p\n", ptr);
    printf("Value using pointer (*ptr): %d\n", *ptr);

}
