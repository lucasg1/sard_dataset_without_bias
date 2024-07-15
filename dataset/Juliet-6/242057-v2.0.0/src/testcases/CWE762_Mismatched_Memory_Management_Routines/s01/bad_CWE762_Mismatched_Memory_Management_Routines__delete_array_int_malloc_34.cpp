namespace NAMESPACE0
{
typedef union
{
    int * unionFirst;
    int * unionSecond;
} unionType;
void FUN0()
{
    int * data;
    unionType myUnion;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
<START>
        delete [] data;
<END>
    }
}
} 
