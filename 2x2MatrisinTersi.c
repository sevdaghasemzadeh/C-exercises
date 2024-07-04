#include <stdio.h>

int i,j;
int a[2][2];

void MatrisTersiBul (int a[2][2]);

int main ()
{
   for(i=0; i<2; i++)
   {
      for(j=0; j<2;j++)
      {
         printf("%d. sütun %d. satırdaki sayıyı giriniz.  ", i+1,j+1);
         scanf("%d", &a[i][j]);
      }
   }

   for(i=0; i<2; i++)
   {
      for(j=0; j<2;j++)
      {
         printf("%d ",a[i][j]);
      
      }
      printf("\n");
   }

   MatrisTersiBul (a);

   
   

   return 0;
}

void MatrisTersiBul (int a[2][2])
   {
      double b;
      double c[2][2];
      double MatrisinTersi[2][2];

    b = ( 1.0 / (a[0][0] * a[1][1] - a[0][1]*a[1][0]));
    
    c[0][0] = a[1][1];
    c[0][1] = -a[0][1];
    c[1][0] = -a[1][0];
    c[1][1] = a[0][0];

     for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            MatrisinTersi[i][j] = b * c[i][j];
        }
    }

    printf("Matrisin Tersi:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%.2f ", MatrisinTersi[i][j]);
        
        }
        printf("\n");
    }

  
   }
