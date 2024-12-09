#include <stdio.h>
int main () {


        int moneyMohi;
        int moneyNafis;
        int moneyMasud;
        int moneyShamjad;
        int totalMoney;

        printf("\nMohi payed:  ");
        scanf("%d", &moneyMohi);
        printf("\nNafis paid:  ");
        scanf("%d", &moneyNafis);
        printf("\nMasud paid:  ");
        scanf("%d", &moneyMasud);
        printf("\nShamjad paid:  ");
        scanf("%d", &moneyShamjad);

        totalMoney= moneyMohi + moneyNafis + moneyMasud + moneyShamjad;

        printf("\nTotal money paid: %d RMB\n", totalMoney);

        float shamimWpay= totalMoney/5.0;
        printf("\nShamim will pay: %.2f RMB.\nHe have to pay %.2f RMB.\n", shamimWpay, shamimWpay);
    
    
    
    
    
    
     return 0; 
}