namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(globalTrue)
    {
        data = NULL;
        data = (long *)realloc(data, 100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    if(globalTrue)
    {
<START>
        delete [] data;
<END>
    }
}
} 
