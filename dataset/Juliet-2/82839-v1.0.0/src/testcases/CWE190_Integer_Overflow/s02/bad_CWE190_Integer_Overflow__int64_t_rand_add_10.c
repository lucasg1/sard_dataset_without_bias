void FUN0()
{
    int64_t data;
    data = 0LL;
    if(globalTrue)
    {
        data = (int64_t)RAND64();
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
