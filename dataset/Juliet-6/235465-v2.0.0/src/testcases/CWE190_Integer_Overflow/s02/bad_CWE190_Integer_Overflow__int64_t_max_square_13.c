void FUN0()
{
    int64_t data;
    data = 0LL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = LLONG_MAX;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
<START>
            int64_t result = data * data;
<END>
            printLongLongLine(result);
        }
    }
}
