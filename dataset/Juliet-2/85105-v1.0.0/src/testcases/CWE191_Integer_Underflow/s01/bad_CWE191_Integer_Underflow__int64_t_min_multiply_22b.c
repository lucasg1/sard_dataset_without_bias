int VAR0 = 0;
void FUN0(int64_t data);
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = LLONG_MIN;
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(int64_t data)
{
    if(VAR0)
    {
        if(data < 0) 
        {
<START>
            int64_t result = data * 2;
<END>
            printLongLongLine(result);
        }
    }
}
