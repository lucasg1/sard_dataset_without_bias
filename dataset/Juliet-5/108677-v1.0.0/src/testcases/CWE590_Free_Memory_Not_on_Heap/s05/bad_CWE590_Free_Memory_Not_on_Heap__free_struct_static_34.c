typedef union
{
    twoIntsStruct * unionFirst;
    twoIntsStruct * unionSecond;
} CWE590_Free_Memory_Not_on_Heap__free_struct_static_34_unionType;
void FUN0()
{
    twoIntsStruct * data;
    CWE590_Free_Memory_Not_on_Heap__free_struct_static_34_unionType myUnion;
    data = NULL; 
    {
        static twoIntsStruct dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i].intOne = 1;
                dataBuffer[i].intTwo = 1;
            }
        }
        data = dataBuffer;
    }
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
        printStructLine(&data[0]);
<START>
        free(data);
<END>
    }
}
