typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_67_structType
{
    twoIntsStruct * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_67_structType myStruct);
void FUN1()
{
    twoIntsStruct * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_67_structType myStruct;
    data = NULL;
    data = (twoIntsStruct *)malloc(50*sizeof(twoIntsStruct));
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_67_structType
{
    twoIntsStruct * structFirst;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_67_structType;
void FUN0(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_memmove_67_structType myStruct)
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
        memmove(data, source, 100*sizeof(twoIntsStruct));
<END>
        printStructLine(&data[0]);
        free(data);
    }
}
