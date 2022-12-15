#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[40]; 
    fgets(s, 40, stdin); 
    char rep[40];
    int n = strlen(s)-1; 
    char sep[10] = " ";
    char *istr;   
    for (int i = 0; i < n/2; i++) {
        if (s[i] != ' '){
            rep[i] += s[i];
            
        }
        else {
            rep[i] += ' ';
            
        }
    }
    istr = strtok(rep, sep); 
    char all[40];
    int k = 0;
    for (int j = n/2; j < n; j++) {
        if (s[j] != ' '){
            all[k] += s[j];
            k++;
        }
        else {
            all[k] += ' ';
            k++;
        }
        
    }
    char *aboba = strtok(all,sep);
    while (istr != NULL) {
        if (strcmp(istr,aboba)==0) {
            printf("%s", istr);
            aboba = strtok(NULL,sep);
        }
        else {
            istr = strtok(NULL,sep);
        }
        
    }
    
   

    
}