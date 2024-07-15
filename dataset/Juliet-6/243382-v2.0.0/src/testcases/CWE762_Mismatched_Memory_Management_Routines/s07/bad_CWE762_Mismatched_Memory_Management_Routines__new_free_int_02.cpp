namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(1)
    {
        data = new int;
    }
    if(1)
    {
<START>
        free(data);
<END>
    }
}
} 
