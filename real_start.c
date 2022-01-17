#include <stdio.h>

int main()
{
    int len;
    int min = 0, max = 0;
    char arr[] = {0};
    
    scanf("%d", &len);

    for(int i = 0; i < len; i++)
        scanf("%d", &arr[i]);


    max = arr[0], min = arr[0];

    for(int i = 0; i < len; i++)
    {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    printf("%d %d", min, max);
} 

//what happen if i change something in first code