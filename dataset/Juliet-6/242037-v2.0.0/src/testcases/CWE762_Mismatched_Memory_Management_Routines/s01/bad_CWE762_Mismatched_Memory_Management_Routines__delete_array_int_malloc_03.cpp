namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(5==5)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(5==5)
    {
<START>
        delete [] data;
<END>
    }
}
} 
