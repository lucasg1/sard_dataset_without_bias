typedef struct _CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_67_structType
{
    char * structFirst;
} CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_67_structType;
void FUN0(CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_67_structType myStruct;
    data = (char *)malloc(100*sizeof(char));
    data[0] = '\0';
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_67_structType
{
    char * structFirst;
} CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_67_structType;
void FUN0(CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_67_structType myStruct)
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
