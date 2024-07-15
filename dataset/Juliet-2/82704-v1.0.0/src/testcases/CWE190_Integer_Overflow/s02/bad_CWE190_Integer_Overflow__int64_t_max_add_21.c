static int VAR0 = 0;
void FUN0(int64_t data)
{
    if(VAR0)
    {
        {
<START>
            int64_t result = data + 1;
<END>
            printLongLongLine(result);
        }
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = LLONG_MAX;
    VAR0 = 1; 
    FUN0(data);
}
