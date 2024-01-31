

#include <stdio.h>


    int a[10];
    int i,eb,ek,b;
    float ort,tp;

 void islem1()
 { 
     eb = a[0]; 
     ek = a[0];
     
     for (i=1; i<10; i++)
     {
            if (ek > a[i])
             ek = a[i];
        
             if(eb < a[i])
             eb = a[i];
          
        
    
     }
     
     printf("dizidki en büyük eleman: %d\n dizideki en küçük eleman: %d\n" , eb, ek);
 }
 
 
 void islem2()
 {
     tp = 0;
     ort = 0;
     for(i=0; i<10; i++)
     {
         tp = tp + a[i];
     }
     
     ort = tp / 10;
     
     printf("dizinin ortlaması: %f\n" , ort);
     
     if ( (int) ort == ort)
     printf("dizinin ortalaması tam sayıdır\n");
     else
     printf("dizinin ortalaması tam sayı değildir\n");
 }
 
 void islem3()
 {
     ek=-1;
     
     for(i=0; i<10; i++)
     
         if (a[i] > 0)
         ek = a[i];
         if(ek != -1)
         {
             for(i=0; i<10; i++)
             if((a[i]>0) && (ek>a[i]))
             
             ek = a[i];
             printf("en küçük sayı: %d\n" , ek);
         }
         
         else 
         printf("pozitif sayı yoktur.\n");
     }
     
 
 int main ()
 {
     for(i=0; i<10; i++)
     {
         printf("%d. sayıyı giriniz" , i+1);
         scanf("%d" , &a[i]);
     }
 
    printf("girdiğiniz dizi bu şekildedir:\n");
    for (i=0; i<10; i++)
    {
        printf("%d  " , a[i]);
    }
    
    printf("\n");
    
    do 
    
    {
    printf("Hangi işlemi yapmak istersiniz?\n");
     printf("Dizinin en büyük ve en küçük elemanını bulmak için 1'e basın\n");
      printf("Dizideki pozitif sayıların en küçüğünü bulmak için 2'ye basın\n");
       printf("Dizinin ortalamasının tam sayı olup olmadığını bulmak için 3'e basın\n");
        printf("programdan çıkmak için 4'e basın\n");
    scanf("%d" , &b);
    
    if (b == 1) islem1();
    if (b== 2) islem2();
    if (b == 3) islem3();
    }
     
    while (b<4);
    
    return 0;
}

