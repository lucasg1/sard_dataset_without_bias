void FUN0()
{
    int i,j;
    int64_t data;
    data = 0LL;
    for(i = 0; i < 1; i++)
    {
        data = LLONG_MIN;
    }
    for(j = 0; j < 1; j++)
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
