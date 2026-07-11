#include <stdio.h>

void _1to19(char d){
        switch (d){
                case 1: printf("One");break;
                case 2: printf("Two");break;
                case 3: printf("Three");break;
                case 4: printf("Four");break;
                case 5: printf("Five");break;
                case 6: printf("Six");break;
                case 7: printf("Seven");break;
                case 8: printf("Eight");break;
                case 9: printf("Nine");break;
                case 10: printf("Ten");break;
                case 11: printf("Eleven");break;
                case 12: printf("Twelve");break;
                case 13: printf("Thirteen");break;
                case 14: printf("Fourteen");break;
                case 15: printf("Fifteen");break;
                case 16: printf("Sixteen");break;
                case 17: printf("Seventeen");break;
                case 18: printf("Eighteen");break;
                case 19: printf("Nineteen");break;
        }
}

void _1to99(char n){
        switch (n/10){
        case 0: _1to19(n); break;
        case 1: _1to19(n); break;
        case 2: printf("Twenty "); _1to19(n%10); break;
        case 3: printf("Thirty "); _1to19(n%10); break;
        case 4: printf("Fourty "); _1to19(n%10); break;
        case 5: printf("Fifty "); _1to19(n%10); break;
        case 6: printf("Sixty "); _1to19(n%10); break;
        case 7: printf("Seventy "); _1to19(n%10); break;
        case 8: printf("Eighty "); _1to19(n%10); break;
        case 9: printf("Ninety ");_1to19(n%10); break;
        }
}
int main(){
        int i;
        scanf("%i", &i);
        switch (i){
        case 0: printf("Zero"); break;
        default:{
        char h = i>99;
                switch (h){
                        case 1: _1to19(i/100);printf(" Hundred");
                        char t = i%100;
                        char d = t>0;
                        switch (d){case 1:printf(" and ");_1to99(t);break;}
                        }
                }
        }
        printf("\n");
}
