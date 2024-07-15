typedef union
{
    twoIntsStruct * unionFirst;
    twoIntsStruct * unionSecond;
} CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_unionType;
void FUN0()
{
    twoIntsStruct * data;
    CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_unionType myUnion;
    data = NULL;
    data = (twoIntsStruct *)malloc(sizeof(data));
    if (data == NULL) {exit(-1);}
    data->intOne = 1;
    data->intTwo = 2;
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
<START>
        printStructLine(data);
<END>
        free(data);
    }
}
