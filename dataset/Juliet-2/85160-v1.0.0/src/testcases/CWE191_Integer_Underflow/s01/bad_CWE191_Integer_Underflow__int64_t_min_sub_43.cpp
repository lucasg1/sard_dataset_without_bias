namespace NAMESPACE0
{
void FUN0(int64_t &data)
{
    data = LLONG_MIN;
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    FUN0(data);
    {
<START>
        int64_t result = data - 1;
<END>
        printLongLongLine(result);
    }
}
} 
