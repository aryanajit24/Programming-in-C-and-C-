#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    //inputs
    int filecount;
    char inputfilename[100] = { '\0' };
    scanf("%d", &filecount);
    printf("Concating the content of %d files...\n", filecount);

    //dynamically allocating memory
    char** inputfilearr = (char**)malloc(filecount * sizeof(char*));
    fflush(stdin);
    //loop to read file names
    for (int i = 0; i < filecount; i++){
        //scans the file name
        fgets(inputfilename, 100, stdin);
        //Remove the trailing '\n' read by the fgets()
        inputfilename[strcspn(inputfilename, "\n")] = 0;
        inputfilearr[i] = (char*)malloc(strlen(inputfilename) + 1 * sizeof(char));
        strcpy(inputfilearr[i], inputfilename);
        fflush(stdin);
    }
    //file pointers
    FILE * fpIn;
    FILE * fpOut;
    //char buffer
    char inputBuffer[64] = { '\0' };
    size_t dataLen = 0;
    size_t bytesRead = 0;
    size_t bytesWritten = 0;
    //opening the output file checking if the file exists
    if ((fpOut = fopen("output.txt", "wb")) == NULL){
        printf("CANNOT OPEN OUTPUT FILE.\n");
        return 0;
    }
    //opening the input file
    for (int i = 0; i < filecount; ++i){
        if ((fpIn = fopen(inputfilearr[i], "rb")) == NULL){
            printf("CANNOT OPEN INPUT FILE.\n");
            return 0;
        }

        //Read up to sizeof(inputBuffer) bytes, ie 64 bytes at a time till the end of file
        while ((bytesRead = fread(inputBuffer, 1, sizeof(inputBuffer), fpIn)) > 0){
            dataLen = strlen(inputBuffer);
            //Write the data to the output file
            if ((bytesWritten = fwrite((void*)inputBuffer, 1, dataLen, fpOut)) < dataLen){
                printf("Error while writing to the output file.\n");
                fclose(fpOut);
                fclose(fpIn);
                return -1;
            }
            printf("%s", inputBuffer);
            memset(inputBuffer, '\0', sizeof(inputBuffer));
        }
        //concatenate the content of the files separated by '\n'
        printf("\n");
        fwrite((void*)"\n", 1, 1, fpOut);
        //closing all the input files
        fclose(fpIn);
    }
    //closing the output file
    fclose(fpOut);
    return 0;
}



