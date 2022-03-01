#include <stdio.h>

int sum(int x, int y)
{
 int t = x+y;
 return t;
} 

int main(){
 
    int x = 4;
    int y = 2;
    
    int t = sum(x,y);
    
    printf("%d", t);
    
    return 0;
}
