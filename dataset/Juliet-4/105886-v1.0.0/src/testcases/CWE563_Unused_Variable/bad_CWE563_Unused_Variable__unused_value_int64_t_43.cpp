namespace NAMESPACE0
{
void FUN0(int64_t &data)
{
    data = 5LL;
}
void FUN1()
{
    int64_t data;
    FUN0(data);
<START>
    data = 10LL;
<END>
    printLongLongLine(data);
}
} 
