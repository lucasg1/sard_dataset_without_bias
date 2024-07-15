typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_loop_67_structType
{
    int64_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_loop_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_loop_67_structType myStruct);
void FUN1()
{
    int64_t * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_loop_67_structType myStruct;
    int64_t * dataBadBuffer = (int64_t *)ALLOCA(50*sizeof(int64_t));
    int64_t * dataGoodBuffer = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data = dataGoodBuffer;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_loop_67_structType
{
    int64_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_loop_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_alloca_loop_67_structType myStruct)
{
    int64_t * data = myStruct.structFirst;
    {
        int64_t source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printLongLongLine(data[0]);
        }
    }
}
