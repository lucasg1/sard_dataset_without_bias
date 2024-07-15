typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_67_structType
{
    int * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_67_structType myStruct);
void FUN1()
{
    int * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_67_structType myStruct;
    int * VAR0 = (int *)ALLOCA(50*sizeof(int));
    int * VAR1 = (int *)ALLOCA(100*sizeof(int));
    data = VAR0;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_67_structType
{
    int * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE805_int_alloca_memmove_67_structType myStruct)
{
    int * data = myStruct.structFirst;
    {
        int source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
