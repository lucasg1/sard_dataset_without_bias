typedef union
{
    twoIntsStruct * unionFirst;
    twoIntsStruct * unionSecond;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_34_unionType;
void FUN0()
{
    twoIntsStruct * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_struct_loop_34_unionType myUnion;
    data = NULL;
    data = (twoIntsStruct *)malloc(50*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
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
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
<START>
                    data[i] = source[i];
<END>
                }
                printStructLine(&data[0]);
                free(data);
            }
        }
    }
}
