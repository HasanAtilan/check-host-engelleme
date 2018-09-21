/*

@ 
@ Created : MR.HASAN @ SOFTWARE DEVELOPER
@ hasanatilan.com
@ Skype: SkyTime1234
@

*/


#include <stdio.h> 


int main(){ 

    
    int engellenen;
    
    printf("--------------------------------------------\n");
    printf("MR.HASAN ~ Basit Sekilde CheckHost Engelleme\n");
    printf("--------------------------------------------\n");
    printf("\n");
    
    printf("1- Check Host Engelle\n");

    
    printf("\n");
    
    printf("Secildi : ");
    scanf("%d",&engellenen);

    
    if(engellenen != NULL){ 
        
        
        switch(engellenen){ 
            
            
            case 1:
            char komutyolla[32]; 
            sprintf(komutyolla, "iptables -A INPUT -s 31.148.219.0/24 -j DROP", n);
            break;
            
            
            default:
            printf("Yanlış Seçim");
            break;
            
            
        }    
    }





} 
