void FUN0()
{
    int64_t data;
    data = 0LL;
    if(globalFive==5)
    {
        data = LLONG_MIN;
    }
    if(globalFive==5)
    {
        {
<START>
            --data;
<END>
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
