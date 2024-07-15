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
        if (data > LLONG_MIN)
        {
            data--;
            int64_t result = data;
            printLongLongLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
        break;
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    while(1)
    {
        data = -2;
        break;
    }
    while(1)
    {
        {
            data--;
            int64_t result = data;
            printLongLongLine(result);
        }
        break;
    }
}
