namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(1)
    {
        data = (int *)malloc(100*sizeof(int));
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
