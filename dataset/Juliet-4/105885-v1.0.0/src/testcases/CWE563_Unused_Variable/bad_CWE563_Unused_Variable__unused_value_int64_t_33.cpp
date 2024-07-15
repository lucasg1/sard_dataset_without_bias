namespace NAMESPACE0
{
void FUN0()
{
    int64_t data;
    int64_t &dataRef = data;
    data = 5LL;
    {
        int64_t data = dataRef;
<START>
        data = 10LL;
<END>
        printLongLongLine(data);
    }
}
} 
