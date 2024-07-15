void FUN0()
{
    int64_t data;
    data = 0LL;
    if(globalTrue)
    {
        data = LLONG_MIN;
    }
    if(globalTrue)
    {
        {
<START>
            data--;
<END>
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
