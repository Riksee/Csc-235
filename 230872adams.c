#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define maxlines 100
#define maxlen 100
int main(){
    
    char store[maxlines][maxlen];
    FILE*input;
    
    input = fopen("adams.txt", "r");
    if(input==NULL){
        printf("Error opening");
        return 1;
    }
  
    int line =0;
    while(!feof(input) && !ferror(input))
        if (fgets(store[line], maxlen, input) != NULL)
        line++;
    fclose(input);


    for(int i=1; i<line; i++){
        int k;

       int ln = strlen(store[i]);
       

        printf("%s\n", store[i]);

        int count=0;
            for(k=0; k<ln; k++){
                if((store[i][k] == 'U' ) || (store[i][k] == 'u')){
                    count+=1;
                }else break;
        
            }
            printf("The output of U's before the first D is: %d\n", count);
    }
    return 0;

}