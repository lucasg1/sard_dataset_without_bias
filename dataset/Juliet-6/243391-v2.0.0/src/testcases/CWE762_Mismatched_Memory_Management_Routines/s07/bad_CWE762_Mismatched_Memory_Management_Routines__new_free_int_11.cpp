namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new int;
    }
    if(globalReturnsTrue())
    {
<START>
        free(data);
<END>
    }
}
} 
