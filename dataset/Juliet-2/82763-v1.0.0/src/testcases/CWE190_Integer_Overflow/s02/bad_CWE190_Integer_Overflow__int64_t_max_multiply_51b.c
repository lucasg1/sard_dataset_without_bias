void FUN0(int64_t data);
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = LLONG_MAX;
    FUN0(data);
}
void FUN0(int64_t data)
{
    if(data > 0) 
    {
<START>
        int64_t result = data * 2;
<END>
        printLongLongLine(result);
    }
}
