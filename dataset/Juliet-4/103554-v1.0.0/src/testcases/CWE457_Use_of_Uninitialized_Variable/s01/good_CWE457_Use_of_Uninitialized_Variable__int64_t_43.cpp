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
    printLongLongLine(data);
}
void FUN2(int64_t &data)
{
    ; 
}
void FUN3()
{
    int64_t data;
    FUN2(data);
    data = 5LL;
    printLongLongLine(data);
}
} 
