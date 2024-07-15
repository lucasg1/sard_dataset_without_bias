namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(globalTrue)
    {
<START>
        delete data;
<END>
    }
}
} 
