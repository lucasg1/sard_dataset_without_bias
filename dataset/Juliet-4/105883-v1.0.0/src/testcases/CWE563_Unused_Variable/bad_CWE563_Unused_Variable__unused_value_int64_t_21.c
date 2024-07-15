static int VAR0 = 0;
void FUN0(int64_t data)
{
    if(VAR0)
    {
<START>
        data = 10LL;
<END>
        printLongLongLine(data);
    }
}
void FUN1()
{
    int64_t data;
    data = 5LL;
    VAR0 = 1; 
    FUN0(data);
}
