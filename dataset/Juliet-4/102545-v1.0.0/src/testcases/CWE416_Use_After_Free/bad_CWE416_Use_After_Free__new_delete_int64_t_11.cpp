namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(globalReturnsTrue())
    {
<START>
        printLongLongLine(*data);
<END>
    }
}
} 
