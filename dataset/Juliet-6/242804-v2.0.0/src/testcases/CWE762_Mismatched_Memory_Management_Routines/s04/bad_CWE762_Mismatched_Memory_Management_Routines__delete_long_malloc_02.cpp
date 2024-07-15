namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(1)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(1)
    {
<START>
        delete data;
<END>
    }
}
} 
