void FUN0(int64_t data);
void FUN1(int64_t data)
{
    FUN0(data);
}
void FUN2(int64_t data);
void FUN3()
{
    int64_t data;
    data = 0LL;
    data = (int64_t)RAND64();
    FUN2(data);
}
void FUN1(int64_t data);
void FUN2(int64_t data)
{
    FUN1(data);
}
void FUN6(int64_t data);
void FUN0(int64_t data)
{
    FUN6(data);
}
void FUN6(int64_t data)
{
    if(data > 0) 
    {
<START>
        int64_t result = data * 2;
<END>
        printLongLongLine(result);
    }
}