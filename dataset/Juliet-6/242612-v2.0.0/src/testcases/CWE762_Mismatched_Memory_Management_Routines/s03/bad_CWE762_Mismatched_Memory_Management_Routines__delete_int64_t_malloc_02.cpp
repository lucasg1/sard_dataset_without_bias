namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(1)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
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
