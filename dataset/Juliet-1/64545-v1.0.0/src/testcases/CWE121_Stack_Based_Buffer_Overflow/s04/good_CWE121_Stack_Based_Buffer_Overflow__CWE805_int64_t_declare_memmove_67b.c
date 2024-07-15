typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_67_structType
{
    int64_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_67_structType myStruct);
void FUN1()
{
    int64_t * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_67_structType myStruct;
    int64_t dataBadBuffer[50];
    int64_t dataGoodBuffer[100];
    data = dataGoodBuffer;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_67_structType
{
    int64_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE805_int64_t_declare_memmove_67_structType myStruct)
{
    int64_t * data = myStruct.structFirst;
    {
        int64_t source[100] = {0}; 
        memmove(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
    }
}
