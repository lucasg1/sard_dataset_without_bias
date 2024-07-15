typedef struct _CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_67_structType
{
    char * structFirst;
} CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_67_structType;
void FUN0(CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_67_structType myStruct;
    data = (char *)malloc(100*sizeof(char));
    data[0] = '\0';
    {
        size_t dataLen = strlen(data);
        FILE * pFile;
        if (100-dataLen > 1)
        {
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                if (fgets(data+dataLen, (int)(100-dataLen), pFile) == NULL)
                {
                    printLine("fgets() failed");
                    data[dataLen] = '\0';
                }
                fclose(pFile);
            }
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_67_structType
{
    char * structFirst;
} CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_67_structType;
void FUN0(CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_file_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        size_t i;
        for (i=0; i < strlen(data); i++)
        {
            if (data[i] == SEARCH_CHAR)
            {
                printLine("We have a match!");
                break;
            }
        }
        free(data);
    }
}
