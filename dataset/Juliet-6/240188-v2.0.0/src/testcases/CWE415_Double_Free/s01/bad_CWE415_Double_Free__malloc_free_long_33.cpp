namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    long * &dataRef = data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    free(data);
    {
        long * data = dataRef;
<START>
        free(data);
<END>
    }
}
} 
