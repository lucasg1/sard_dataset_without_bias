void FUN0()
{
    int i,j;
    short data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        data = SHRT_MIN;
    }
    for(j = 0; j < 1; j++)
    {
        {
<START>
            short result = data - 1;
<END>
            printIntLine(result);
        }
    }
}
