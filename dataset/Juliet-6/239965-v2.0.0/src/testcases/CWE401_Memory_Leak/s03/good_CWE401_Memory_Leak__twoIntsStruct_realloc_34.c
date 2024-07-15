typedef union
{
    twoIntsStruct * unionFirst;
    twoIntsStruct * unionSecond;
} CWE401_Memory_Leak__twoIntsStruct_realloc_34_unionType;
void FUN0()
{
    twoIntsStruct * data;
    CWE401_Memory_Leak__twoIntsStruct_realloc_34_unionType myUnion;
    data = NULL;
    data = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
        ; 
    }
}
void FUN1()
{
    twoIntsStruct * data;
    CWE401_Memory_Leak__twoIntsStruct_realloc_34_unionType myUnion;
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
        free(data);
    }
}
