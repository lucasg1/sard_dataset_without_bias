namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(5==5)
    {
        data = (long *)calloc(100, sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(5==5)
    {
<START>
        delete data;
<END>
    }
}
} 
