typedef struct _CWE124_Buffer_Underwrite__char_alloca_cpy_67_structType
{
    char * structFirst;
} CWE124_Buffer_Underwrite__char_alloca_cpy_67_structType;
void FUN0(CWE124_Buffer_Underwrite__char_alloca_cpy_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE124_Buffer_Underwrite__char_alloca_cpy_67_structType myStruct;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    data = dataBuffer - 8;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE124_Buffer_Underwrite__char_alloca_cpy_67_structType
{
    char * structFirst;
} CWE124_Buffer_Underwrite__char_alloca_cpy_67_structType;
void FUN0(CWE124_Buffer_Underwrite__char_alloca_cpy_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        strcpy(data, source);
<END>
        printLine(data);
    }
}
