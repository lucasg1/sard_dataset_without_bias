namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new int64_t;
        delete data;
    }
    if(globalReturnsTrue())
    {
<START>
        delete data;
<END>
    }
}
} 
