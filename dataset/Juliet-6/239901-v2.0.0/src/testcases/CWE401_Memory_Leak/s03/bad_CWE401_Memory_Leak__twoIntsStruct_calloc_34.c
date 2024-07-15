typedef union
{
    twoIntsStruct * unionFirst;
    twoIntsStruct * unionSecond;
} CWE401_Memory_Leak__twoIntsStruct_calloc_34_unionType;
void FUN0()
{
    twoIntsStruct * data;
    CWE401_Memory_Leak__twoIntsStruct_calloc_34_unionType myUnion;
    data = NULL;
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
<START>
<END>
        ; 
    }
}
