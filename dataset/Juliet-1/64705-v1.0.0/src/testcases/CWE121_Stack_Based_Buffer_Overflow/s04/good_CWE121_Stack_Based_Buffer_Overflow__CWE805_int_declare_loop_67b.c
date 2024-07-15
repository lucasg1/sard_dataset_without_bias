typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_loop_67_structType
{
    int * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_loop_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_loop_67_structType myStruct);
void FUN1()
{
    int * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_loop_67_structType myStruct;
    int VAR0[50];
    int VAR1[100];
    data = VAR1;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_loop_67_structType
{
    int * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_loop_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE805_int_declare_loop_67_structType myStruct)
{
    int * data = myStruct.structFirst;
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
        }
    }
}
