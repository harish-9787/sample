#include<stdio.h>
int main (){
    int var1=10,var2=20,var3=30,var4=40;
    int*ptr_arr[4] = {&var1,&var2,&var3,&var4};
    for (int i=0;i<4;i++){
            printf("value: %d\t address:%d\n", *ptr_arr[i], ptr_arr[i]);
    }
    return 0;
}
