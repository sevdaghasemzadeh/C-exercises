#include <stdio.h>

int * EbBul (int a[], int n);

int main()
{
   int b[] = {2,22,43,56,77,54,32,23,1,34};
   
   EbBul (b,10);
    
    return 0;
}

int * EbBul (int a[], int n)
{
    int eb,i,*p;
    eb = a[0];
    for(i=0; i<n; i++)
    {
        if (eb<a[i])
        {
            eb = a[i];
            p = &eb;
        }
        else
        {
            p = &a[0];
        }
    }
    
    printf("en büyük: %d" , eb);
    
    return p;
}
