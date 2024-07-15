namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (long *)calloc(100, sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    else
    {
        data = new long[100];
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        delete [] data;
<END>
    }
    else
    {
        free(data);
    }
}
} 
