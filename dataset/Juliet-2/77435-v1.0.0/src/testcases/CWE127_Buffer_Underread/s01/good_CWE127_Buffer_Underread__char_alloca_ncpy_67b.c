typedef struct _CWE127_Buffer_Underread__char_alloca_ncpy_67_structType
{
    char * structFirst;
} CWE127_Buffer_Underread__char_alloca_ncpy_67_structType;
void FUN0(CWE127_Buffer_Underread__char_alloca_ncpy_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE127_Buffer_Underread__char_alloca_ncpy_67_structType myStruct;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    data = dataBuffer;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE127_Buffer_Underread__char_alloca_ncpy_67_structType
{
    char * structFirst;
} CWE127_Buffer_Underread__char_alloca_ncpy_67_structType;
void FUN0(CWE127_Buffer_Underread__char_alloca_ncpy_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
        strncpy(dest, data, strlen(dest));
        dest[100-1] = '\0';
        printLine(dest);
    }
}
