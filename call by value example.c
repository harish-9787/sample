#include<stdio.h>
int main (){
    int a=10,b=20;
    swapx(a,b);
    printf("inside main:\n a=%d, b=%d\n",a,b);
    return 0;
}
void swapx(int x, int y){
    int t;
    t=x;
    x=y;
    y=t;
    printf("inside function:\n x=%d, y=%d\n",x,y);
}
