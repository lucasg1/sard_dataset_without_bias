namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    {
        int * data = dataRef;
<START>
        delete data;
<END>
    }
}
} 
