#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char name_of_file[100][50];
    int fileid[100];
    int compare_file = 0;
    int least_id = 0;
    int stepscount, fileno, t;

    printf("NUMBER OF STEPS: ");
    scanf("%d", &stepscount);

    for (int i = 0; i< stepscount; i++) {

        printf("HOW MANY FILES ARE YOU TO COMPARE? : ");
        scanf("%d", &fileno);

        int j = 0;
       
        while (j<fileno) {
            printf("ENTER FILENAME & THEIR ID: ");
           scanf("%s %d", name_of_file[j], &fileid[j]);
            j++;
        }
        printf("\n");
        least_id = fileid[0];
        for (int j = 0; j< fileno; j++) {

            for (int i = j + 1; i < fileno; i++) {
                compare_file = strcmp(name_of_file[j], name_of_file[i]);
                if((strcmp(name_of_file[j], name_of_file[i]) == 0) &&  (least_id > fileid[j])){
                    
                    least_id = fileid[j];
                }
                else if((strcmp(name_of_file[j], name_of_file[i]) != 0) && (fileid[j] > fileid[i])){
                    t = fileid[j];
                    fileid[j] = fileid[i];
                    fileid[i] = t;
                }
            }
        }
        for (int j = 0; j< fileno; j++) {
            if (compare_file != 0){
                printf("%d\n", fileid[j]);
            }
        }
        if (compare_file == 0){
            printf("%s %d WON'T BE DELETED\n", name_of_file, least_id);
        }
    }
}

 