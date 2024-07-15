void FUN0()
{
    int64_t data;
    data = 0LL;
    if(globalReturnsTrue())
    {
        data = (int64_t)RAND64();
    }
    if(globalReturnsTrue())
    {
        {
<START>
            ++data;
<END>
            int64_t result = data;
            printLongLongLine(result);
        }
    }
}
