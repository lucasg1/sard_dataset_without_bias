void FUN0(int64_t data);
void FUN1(int64_t data)
{
    FUN0(data);
}
void FUN2(int64_t data);
void FUN3(int64_t data)
{
    FUN2(data);
}
void FUN4(int64_t data);
void FUN5()
{
    int64_t data;
    data = 0LL;
    data = 2;
    FUN4(data);
}
void FUN6(int64_t data);
void FUN7()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%lld", &data);
    FUN6(data);
}
void FUN1(int64_t data);
void FUN10(int64_t data)
{
    FUN1(data);
}
void FUN3(int64_t data);
void FUN12(int64_t data)
{
    FUN3(data);
}
void FUN10(int64_t data);
void FUN4(int64_t data)
{
    FUN10(data);
}
void FUN12(int64_t data);
void FUN6(int64_t data)
{
    FUN12(data);
}
void FUN0(int64_t data)
{
    if(data > 0) 
    {
        int64_t result = data * 2;
        printLongLongLine(result);
    }
}
void FUN2(int64_t data)
{
    if(data > 0) 
    {
        if (data < (LLONG_MAX/2))
        {
            int64_t result = data * 2;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
