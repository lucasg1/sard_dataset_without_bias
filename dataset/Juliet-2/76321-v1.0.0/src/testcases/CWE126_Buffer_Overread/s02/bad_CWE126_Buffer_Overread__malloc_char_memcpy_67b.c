typedef struct _CWE126_Buffer_Overread__malloc_char_memcpy_67_structType
{
    char * structFirst;
} CWE126_Buffer_Overread__malloc_char_memcpy_67_structType;
void FUN0(CWE126_Buffer_Overread__malloc_char_memcpy_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE126_Buffer_Overread__malloc_char_memcpy_67_structType myStruct;
    data = NULL;
    data = (char *)malloc(50*sizeof(char));
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE126_Buffer_Overread__malloc_char_memcpy_67_structType
{
    char * structFirst;
} CWE126_Buffer_Overread__malloc_char_memcpy_67_structType;
void FUN0(CWE126_Buffer_Overread__malloc_char_memcpy_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
<START>
        memcpy(dest, data, strlen(dest)*sizeof(char));
<END>
        dest[100-1] = '\0';
        printLine(dest);
        free(data);
    }
}
