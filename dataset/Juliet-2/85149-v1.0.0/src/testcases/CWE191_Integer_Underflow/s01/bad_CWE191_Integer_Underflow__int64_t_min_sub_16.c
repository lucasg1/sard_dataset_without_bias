void FUN0()
{
    int64_t data;
    data = 0LL;
    while(1)
    {
        data = LLONG_MIN;
        break;
    }
    while(1)
    {
        {
<START>
            int64_t result = data - 1;
<END>
            printLongLongLine(result);
        }
        break;
    }
}
