typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_loop_67_structType
{
    char * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_loop_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_loop_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_loop_67_structType myStruct;
    char * VAR0 = (char *)ALLOCA(50*sizeof(char));
    char * VAR1 = (char *)ALLOCA(100*sizeof(char));
    data = VAR1;
    data[0] = '\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_loop_67_structType
{
    char * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_loop_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE805_char_alloca_loop_67_structType myStruct)
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
