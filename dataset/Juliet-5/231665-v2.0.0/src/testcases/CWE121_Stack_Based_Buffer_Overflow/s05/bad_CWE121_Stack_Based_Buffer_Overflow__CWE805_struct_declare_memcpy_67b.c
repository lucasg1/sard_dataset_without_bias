typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67_structType
{
    twoIntsStruct * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67_structType myStruct);
void FUN1()
{
    twoIntsStruct * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67_structType myStruct;
    twoIntsStruct dataBadBuffer[50];
    twoIntsStruct dataGoodBuffer[100];
    data = dataBadBuffer;
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67_structType
{
    twoIntsStruct * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67_structType;
void FUN0(CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_memcpy_67_structType myStruct)
{
    twoIntsStruct * data = myStruct.structFirst;
    {
        twoIntsStruct source[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                source[i].intOne = 0;
                source[i].intTwo = 0;
            }
        }
<START>
        memcpy(data, source, 100*sizeof(twoIntsStruct));
<END>
        printStructLine(&data[0]);
    }
}
