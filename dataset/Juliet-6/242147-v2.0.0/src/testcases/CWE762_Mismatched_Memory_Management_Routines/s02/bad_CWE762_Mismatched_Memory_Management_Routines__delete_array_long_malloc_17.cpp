namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    long * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    for(j = 0; j < 1; j++)
    {
<START>
        delete [] data;
<END>
    }
}
} 
