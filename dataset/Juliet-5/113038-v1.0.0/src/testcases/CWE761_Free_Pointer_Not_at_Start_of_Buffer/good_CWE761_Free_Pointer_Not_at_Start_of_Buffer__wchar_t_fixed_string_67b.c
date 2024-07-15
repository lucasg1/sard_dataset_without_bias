typedef struct _CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_67_structType
{
    wchar_t * structFirst;
} CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_67_structType;
void FUN0(CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_67_structType myStruct;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    data[0] = L'\0';
    wcscpy(data, BAD_SOURCE_FIXED_STRING);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_67_structType
{
    wchar_t * structFirst;
} CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_67_structType;
void FUN0(CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_fixed_string_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        size_t i;
        for (i=0; i < wcslen(data); i++)
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
