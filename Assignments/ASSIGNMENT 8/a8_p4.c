#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int fileCount = 0;
    char inputFilename[100] = { '\0' };

    printf("Enter the number of files that needs to be concatenated : ");
    scanf("%d", &fileCount);

    if (fileCount <= 0)
    {
        printf("Invalid file count. Value must be greater than zero. \n");
        return -1;
    }

    char** inputFileArr = (char**)malloc(fileCount * sizeof(char*));
    fflush(stdin);
    for (int i = 0; i < fileCount; i++)
    {
        fgets(inputFilename, 100, stdin);
        //Remove the trailing '\n' read by the fgets()
        inputFilename[strcspn(inputFilename, "\n")] = 0;
        inputFileArr[i] = (char*)malloc(strlen(inputFilename) + 1 * sizeof(char));
        strcpy(inputFileArr[i], inputFilename);
        fflush(stdin);
    }

    FILE * fpIn;
    FILE * fpOut;

    char inputBuffer[64] = { '\0' };
    size_t dataLen = 0;
    size_t bytesRead = 0;
    size_t bytesWritten = 0;

    if ((fpOut = fopen("output.txt", "wb")) == NULL)
    {
        printf("CANNOT OPEN OUTPUT FILE.\n");
        return 0;
    }

    for (int i = 0; i < fileCount; ++i)
    {
        //Open Input file
        if ((fpIn = fopen(inputFileArr[i], "rb")) == NULL)
        {
            printf("CANNOT OPEN INPUT FILE.\n");
            return 0;
        }

        //Read up to sizeof(inputBuffer) bytes, ie 64 bytes at a time till the end of file
        while ((bytesRead = fread(inputBuffer, 1, sizeof(inputBuffer), fpIn)) > 0)
        {
            dataLen = strlen(inputBuffer);
            //Write the data to the output file
            if ((bytesWritten = fwrite((void*)inputBuffer, 1, dataLen, fpOut)) < dataLen)
            {
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

        fclose(fpIn);
    }

    fclose(fpOut);
    return 0;
}
