typedef struct _CWE126_Buffer_Overread__malloc_char_memmove_67_structType
{
    char * structFirst;
} CWE126_Buffer_Overread__malloc_char_memmove_67_structType;
void FUN0(CWE126_Buffer_Overread__malloc_char_memmove_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE126_Buffer_Overread__malloc_char_memmove_67_structType myStruct;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE126_Buffer_Overread__malloc_char_memmove_67_structType
{
    char * structFirst;
} CWE126_Buffer_Overread__malloc_char_memmove_67_structType;
void FUN0(CWE126_Buffer_Overread__malloc_char_memmove_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        memmove(dest, data, strlen(dest)*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
        free(data);
    }
}
