void FUN0()
{
    int i,j;
    int64_t data;
    data = 0LL;
    for(i = 0; i < 1; i++)
    {
        data = LLONG_MAX;
    }
    for(j = 0; j < 1; j++)
    {
        {
<START>
            int64_t result = data + 1;
<END>
            printLongLongLine(result);
        }
    }
}
