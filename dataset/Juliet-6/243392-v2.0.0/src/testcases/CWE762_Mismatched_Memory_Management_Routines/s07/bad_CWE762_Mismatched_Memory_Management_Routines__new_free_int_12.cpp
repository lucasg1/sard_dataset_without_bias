namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new int;
    }
    else
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        free(data);
<END>
    }
    else
    {
        delete data;
    }
}
} 
