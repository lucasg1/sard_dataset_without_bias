namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        delete data;
<END>
    }
}
} 
