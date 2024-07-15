typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_67_structType
{
    int * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_67_structType myStruct);
void FUN1()
{
    int * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_67_structType myStruct;
    int VAR0[50];
    int VAR1[100];
    data = VAR0;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_67_structType
{
    int * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_memcpy_67_structType myStruct)
{
    int * data = myStruct.structFirst;
    {
        int source[100] = {0}; 
<START>
        memcpy(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
