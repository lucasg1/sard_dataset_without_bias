typedef struct _CWE127_Buffer_Underread__malloc_char_cpy_67_structType
{
    char * structFirst;
} CWE127_Buffer_Underread__malloc_char_cpy_67_structType;
void FUN0(CWE127_Buffer_Underread__malloc_char_cpy_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE127_Buffer_Underread__malloc_char_cpy_67_structType myStruct;
    data = NULL;
    {
        char * dataBuffer = (char *)malloc(100*sizeof(char));
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        data = dataBuffer;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE127_Buffer_Underread__malloc_char_cpy_67_structType
{
    char * structFirst;
} CWE127_Buffer_Underread__malloc_char_cpy_67_structType;
void FUN0(CWE127_Buffer_Underread__malloc_char_cpy_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char dest[100*2];
        memset(dest, 'C', 100*2-1); 
        dest[100*2-1] = '\0'; 
        strcpy(dest, data);
        printLine(dest);
    }
}
