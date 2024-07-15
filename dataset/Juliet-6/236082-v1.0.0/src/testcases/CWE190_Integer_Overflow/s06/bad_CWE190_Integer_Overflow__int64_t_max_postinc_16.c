void FUN0()
{
    int64_t data;
    data = 0LL;
    while(1)
    {
        data = LLONG_MAX;
        break;
    }
    while(1)
    {
        {
<START>
            data++;
<END>
            int64_t result = data;
            printLongLongLine(result);
        }
        break;
    }
}
