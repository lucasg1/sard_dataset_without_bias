void FUN0()
{
    int64_t data;
    data = 0LL;
    while(1)
    {
        data = (int64_t)RAND64();
        break;
    }
    while(1)
    {
        {
<START>
            data--;
<END>
            int64_t result = data;
            printLongLongLine(result);
        }
        break;
    }
}
