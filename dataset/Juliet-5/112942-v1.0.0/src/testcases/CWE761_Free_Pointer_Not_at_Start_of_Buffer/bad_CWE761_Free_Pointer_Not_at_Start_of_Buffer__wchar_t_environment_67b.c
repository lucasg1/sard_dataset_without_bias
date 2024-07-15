typedef struct _CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_67_structType
{
    wchar_t * structFirst;
} CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_67_structType;
void FUN0(CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_67_structType myStruct;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    data[0] = L'\0';
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_67_structType
{
    wchar_t * structFirst;
} CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_67_structType;
void FUN0(CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
<START>
    for (; *data != L'\0'; data++)
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
