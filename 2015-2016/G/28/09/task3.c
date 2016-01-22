#include <stdio.h>

int main() {

    int arr[69];
    int arr2[69];
    int num,palindrom = 1,i = 0,l,s,e,temp,temp2;
    
    scanf("%d",&num);
    
    do
    {
        temp2 = num;
        i = 0;
        
        while(temp2 > 0)
        {
            
            temp = temp2 % 16; 
            arr[i] =  temp;
            temp2 = temp2 / 16;
            i++;
        }
        s = 0;
        e = i - 1;
        while(s < e)
        {
            if (arr[s] != arr[e])
            {
                palindrom = 0;
            }
            s++;
            e--;
        }
        if(palindrom == 0)
        {
            num ++;
            palindrom = 1;
        }
        else
        {
            break;
        }
    }while(1);
    
    l = i;
    i = 0;
    
    for(;i < l; i++)
    {
        if(arr[i] == 10)
        {
            printf("A");
        }
        else if(arr[i] == 11)
        {
            printf("B");
        }
        else if(arr[i] == 12)
        {
            printf("C");
        }
        else if(arr[i] == 13)
        {
            printf("D");
        }
        else if (arr[i] == 14)
        {
            printf("E");
        }
        else if (arr[i] == 15)
        {
            printf("F");
        }
        else
        {
            printf("%d",arr[i]);
        }
    }
        
    return 0;
}


