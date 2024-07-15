typedef struct _CWE124_Buffer_Underwrite__char_declare_loop_67_structType
{
    char * structFirst;
} CWE124_Buffer_Underwrite__char_declare_loop_67_structType;
void FUN0(CWE124_Buffer_Underwrite__char_declare_loop_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE124_Buffer_Underwrite__char_declare_loop_67_structType myStruct;
    char dataBuffer[100];
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    data = dataBuffer;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE124_Buffer_Underwrite__char_declare_loop_67_structType
{
    char * structFirst;
} CWE124_Buffer_Underwrite__char_declare_loop_67_structType;
void FUN0(CWE124_Buffer_Underwrite__char_declare_loop_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        size_t i;
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        for (i = 0; i < 100; i++)
        {
            data[i] = source[i];
        }
        data[100-1] = '\0';
        printLine(data);
    }
}
