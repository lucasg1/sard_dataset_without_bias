void FUN0()
{
    int64_t data;
    data = 0LL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (int64_t)RAND64();
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
<START>
            int64_t result = data * data;
<END>
            printLongLongLine(result);
        }
    }
}
