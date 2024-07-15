void FUN0()
{
    int64_t data;
    data = 0LL;
    if(globalTrue)
    {
        data = LLONG_MAX;
    }
    if(globalTrue)
    {
        {
<START>
            int64_t result = data + 1;
<END>
            printLongLongLine(result);
        }
    }
}
