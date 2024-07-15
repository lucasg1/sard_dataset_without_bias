namespace NAMESPACE0
{
void FUN0(int64_t &data)
{
    data = 5LL;
    printLongLongLine(data);
}
void FUN1()
{
    int64_t data;
    FUN0(data);
    data = 10LL;
    printLongLongLine(data);
}
void FUN2(int64_t &data)
{
    data = 5LL;
}
void FUN3()
{
    int64_t data;
    FUN2(data);
    printLongLongLine(data);
}
} 
