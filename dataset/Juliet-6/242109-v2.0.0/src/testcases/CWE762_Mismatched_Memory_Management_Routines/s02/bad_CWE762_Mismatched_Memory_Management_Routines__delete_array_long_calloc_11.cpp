namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (long *)calloc(100, sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(globalReturnsTrue())
    {
<START>
        delete [] data;
<END>
    }
}
} 
