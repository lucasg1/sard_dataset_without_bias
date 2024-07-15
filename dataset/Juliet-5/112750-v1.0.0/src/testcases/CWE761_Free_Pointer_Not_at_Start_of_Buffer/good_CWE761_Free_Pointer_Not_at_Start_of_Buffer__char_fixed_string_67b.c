typedef struct _CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_fixed_string_67_structType
{
    char * structFirst;
} CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_fixed_string_67_structType;
void FUN0(CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_fixed_string_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_fixed_string_67_structType myStruct;
    data = (char *)malloc(100*sizeof(char));
    data[0] = '\0';
    strcpy(data, BAD_SOURCE_FIXED_STRING);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_fixed_string_67_structType
{
    char * structFirst;
} CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_fixed_string_67_structType;
void FUN0(CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_fixed_string_67_structType myStruct)
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
