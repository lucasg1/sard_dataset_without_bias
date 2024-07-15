typedef union
{
    int * unionFirst;
    int * unionSecond;
} CWE401_Memory_Leak__int_calloc_34_unionType;
void FUN0()
{
    int * data;
    CWE401_Memory_Leak__int_calloc_34_unionType myUnion;
    data = NULL;
    data = (int *)calloc(100, sizeof(int));
    if (data == NULL) {exit(-1);}
    data[0] = 5;
    printIntLine(data[0]);
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
<START>
<END>
        ; 
    }
}
