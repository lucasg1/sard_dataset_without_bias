typedef struct _CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_67_structType
{
    char * structFirst;
} CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_67_structType;
void FUN0(CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_67_structType myStruct;
    data = (char *)malloc(100*sizeof(char));
    data[0] = '\0';
    {
        size_t dataLen = strlen(data);
        if (100-dataLen > 1)
        {
            if (fgets(data+dataLen, (int)(100-dataLen), stdin) != NULL)
            {
                dataLen = strlen(data);
                if (dataLen > 0 && data[dataLen-1] == '\n')
                {
                    data[dataLen-1] = '\0';
                }
            }
            else
            {
                printLine("fgets() failed");
                data[dataLen] = '\0';
            }
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_67_structType
{
    char * structFirst;
} CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_67_structType;
void FUN0(CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_console_67_structType myStruct)
{
    char * data = myStruct.structFirst;
<START>
    for (; *data != '\0'; data++)
<END>
    {
        if (*data == SEARCH_CHAR)
        {
            printLine("We have a match!");
            break;
        }
    }
    free(data);
}
