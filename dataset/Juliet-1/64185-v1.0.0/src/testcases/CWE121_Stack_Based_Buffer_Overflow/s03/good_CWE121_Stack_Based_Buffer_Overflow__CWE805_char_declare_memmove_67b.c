typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memmove_67_structType
{
    char * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memmove_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memmove_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memmove_67_structType myStruct;
    char VAR0[50];
    char VAR1[100];
    data = VAR1;
    data[0] = '\0'; 
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memmove_67_structType
{
    char * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memmove_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE805_char_declare_memmove_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        memmove(data, source, 100*sizeof(char));
        data[100-1] = '\0'; 
        printLine(data);
    }
}
