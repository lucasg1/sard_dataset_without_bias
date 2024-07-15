typedef struct _CWE127_Buffer_Underread__malloc_char_memcpy_67_structType
{
    char * structFirst;
} CWE127_Buffer_Underread__malloc_char_memcpy_67_structType;
void FUN0(CWE127_Buffer_Underread__malloc_char_memcpy_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE127_Buffer_Underread__malloc_char_memcpy_67_structType myStruct;
    data = NULL;
    {
        char * dataBuffer = (char *)malloc(100*sizeof(char));
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        data = dataBuffer - 8;
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE127_Buffer_Underread__malloc_char_memcpy_67_structType
{
    char * structFirst;
} CWE127_Buffer_Underread__malloc_char_memcpy_67_structType;
void FUN0(CWE127_Buffer_Underread__malloc_char_memcpy_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
<START>
        memcpy(dest, data, 100*sizeof(char));
<END>
        dest[100-1] = '\0';
        printLine(dest);
    }
}
