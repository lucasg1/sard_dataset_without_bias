typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_67_structType
{
    char * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_67_structType myStruct;
    char dataBuffer[100];
    data = dataBuffer;
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_67_structType
{
    char * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_loop_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char dest[50] = "";
        size_t i, dataLen;
        dataLen = strlen(data);
        for (i = 0; i < dataLen; i++)
        {
<START>
            dest[i] = data[i];
<END>
        }
        dest[50-1] = '\0'; 
        printLine(data);
    }
}
