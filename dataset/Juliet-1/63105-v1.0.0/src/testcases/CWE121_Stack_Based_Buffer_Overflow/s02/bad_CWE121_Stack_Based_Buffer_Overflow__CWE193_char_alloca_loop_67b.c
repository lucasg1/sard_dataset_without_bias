typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_structType
{
    char * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_structType myStruct;
    char * VAR0 = (char *)ALLOCA((10)*sizeof(char));
    char * VAR1 = (char *)ALLOCA((10+1)*sizeof(char));
    data = VAR0;
    data[0] = '\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_structType
{
    char * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_loop_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = strlen(source);
        for (i = 0; i < sourceLen + 1; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        printLine(data);
    }
}
