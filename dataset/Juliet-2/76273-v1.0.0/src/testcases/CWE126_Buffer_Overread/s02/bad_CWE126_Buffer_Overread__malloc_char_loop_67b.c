typedef struct _CWE126_Buffer_Overread__malloc_char_loop_67_structType
{
    char * structFirst;
} CWE126_Buffer_Overread__malloc_char_loop_67_structType;
void FUN0(CWE126_Buffer_Overread__malloc_char_loop_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE126_Buffer_Overread__malloc_char_loop_67_structType myStruct;
    data = NULL;
    data = (char *)malloc(50*sizeof(char));
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE126_Buffer_Overread__malloc_char_loop_67_structType
{
    char * structFirst;
} CWE126_Buffer_Overread__malloc_char_loop_67_structType;
void FUN0(CWE126_Buffer_Overread__malloc_char_loop_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        size_t i, destLen;
        char dest[100];
        memset(dest, 'C', 100-1);
        dest[100-1] = '\0'; 
        destLen = strlen(dest);
        for (i = 0; i < destLen; i++)
        {
<START>
            dest[i] = data[i];
<END>
        }
        dest[100-1] = '\0';
        printLine(dest);
        free(data);
    }
}
