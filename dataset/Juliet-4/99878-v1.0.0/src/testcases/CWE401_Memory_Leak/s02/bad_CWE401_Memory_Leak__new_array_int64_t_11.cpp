namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new int64_t[100];
        data[0] = 5LL;
        printLongLongLine(data[0]);
    }
    if(globalReturnsTrue())
    {
<START>
<END>
        ; 
    }
}
} 
