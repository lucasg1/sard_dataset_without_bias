namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    data = NULL;
    data = (long *)realloc(data, 100*sizeof(long));
    if (data == NULL) {exit(-1);}
    {
        long * dataCopy = data;
        long * data = dataCopy;
<START>
        delete data;
<END>
    }
}
} 
