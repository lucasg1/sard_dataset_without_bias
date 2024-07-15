typedef union
{
    int64_t * unionFirst;
    int64_t * unionSecond;
} CWE401_Memory_Leak__int64_t_realloc_34_unionType;
void FUN0()
{
    int64_t * data;
    CWE401_Memory_Leak__int64_t_realloc_34_unionType myUnion;
    data = NULL;
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    data[0] = 5LL;
    printLongLongLine(data[0]);
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
<START>
<END>
        ; 
    }
}
