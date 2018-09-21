/*

@ 
@ Created : MR.HASAN @ SOFTWARE DEVELOPER
@ hasanatilan.com
@ Skype: SkyTime1234
@

*/


#include <stdio.h> 


int main(){ 

    
    int secilen;
    
    printf("--------------------------------------------\n");
    printf("MR.HASAN ~ CheckHost Engelleme\n");
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
            sprintf(komutyolla, "iptables -I INPUT -p tcp --dport 80 -s 31.148.219.169 -j REJECT", n);
            break;
            
            
            default:
            printf("Yanlış Seçim");
            break;
            
            
        }    
    }





} 
