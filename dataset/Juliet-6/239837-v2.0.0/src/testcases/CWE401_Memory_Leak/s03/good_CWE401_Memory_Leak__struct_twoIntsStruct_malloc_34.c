typedef union
{
    struct _twoIntsStruct * unionFirst;
    struct _twoIntsStruct * unionSecond;
} CWE401_Memory_Leak__struct_twoIntsStruct_malloc_34_unionType;
void FUN0()
{
    struct _twoIntsStruct * data;
    CWE401_Memory_Leak__struct_twoIntsStruct_malloc_34_unionType myUnion;
    data = NULL;
    data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    myUnion.unionFirst = data;
    {
        struct _twoIntsStruct * data = myUnion.unionSecond;
        ; 
    }
}
void FUN1()
{
    struct _twoIntsStruct * data;
    CWE401_Memory_Leak__struct_twoIntsStruct_malloc_34_unionType myUnion;
    data = NULL;
    data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    myUnion.unionFirst = data;
    {
        struct _twoIntsStruct * data = myUnion.unionSecond;
        free(data);
    }
}
