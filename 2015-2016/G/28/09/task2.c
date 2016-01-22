#include <stdio.h>

int main() {

    int n,v,p;
    int temp;

    scanf("%d",&n);
    scanf("%d",&v);
    
    if (v != 1 && v != 0 )
    {
        return 1;
    }
    
    scanf("%d",&p);
    
    if(p < 0 || p > 7)
    {
        return 1;
    }
    
    temp = n & (1 << p);
      
    if(temp != 0)
    {
           temp = 1;
    }
    
    if(temp != v)
    {
        n = n ^ (1 << p);
    }
    
    printf("%d",n);

    return 0;
}
