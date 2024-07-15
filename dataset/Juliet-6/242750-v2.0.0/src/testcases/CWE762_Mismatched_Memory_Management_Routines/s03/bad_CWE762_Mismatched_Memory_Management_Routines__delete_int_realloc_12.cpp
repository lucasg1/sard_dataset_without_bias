namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = NULL;
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    else
    {
        data = new int;
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        delete data;
<END>
    }
    else
    {
        free(data);
    }
}
} 
