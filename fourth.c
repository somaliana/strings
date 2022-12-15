#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[80];
    fgets(s, 80,stdin);
    int Acount = 0;
    int Bcount = 0;
    char *istr = strtok(s, " ");
    
    while (istr!=NULL) {
        for (int i =0; i < strlen(istr); i++) {
            if (istr[i]=='a') {
                Acount += 1;
                
            }
            if (istr[i]=='b') {
                Bcount += 1;
               
            }
        }
        if ((Acount==1)&&(Bcount==1)){
            printf("%s",istr);
        }
        Acount = 0;
        Bcount = 0;
        istr = strtok(NULL, " ");
    }
    
}