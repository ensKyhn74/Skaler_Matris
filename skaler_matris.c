#include <stdio.h>

// SKALER MATRİS Oluştur(Satır ve Sütun Sayısı kesinlikle aynı)
// asal köşegendeki eleman aynı , diğer tüm elemanlar 0
// birim matrisin skaler bir sayıyla çarpılması ile oluşur
// 3 x 3 lük skaler matris örneği aşağıdadır
/* 2 0 0
   0 2 0      
   0 0 2
3 x 3 lük birim matrisin 2 ile çarpılması sonucu oluştu
*/

int main() 

{
    
  int i,j;  
  
  int k;
  
  int ikiBoyutluDizi[5][5];
  
  printf("asal kosegende hangi eleman olsun?: ");
  scanf("%d",&k);
  
 for(i = 0 ; i < 5 ; i++) 
 {                                          
     
  for(j = 0 ; j < 5 ; j++)  
  {
    if(i == j)
    {
     ikiBoyutluDizi[i][j] = k;  
    } 
      
    else
    {
     ikiBoyutluDizi[i][j] = 0; 
    }
  }                              
     
 }
 
 
 for(i = 0 ; i < 5 ; i++) 
 {                                               
  for(j = 0 ; j < 5 ; j++)  
  {
   printf("%d ",ikiBoyutluDizi[i][j]);
  }
   printf("\n");
 }
 
 return 0;
  
}