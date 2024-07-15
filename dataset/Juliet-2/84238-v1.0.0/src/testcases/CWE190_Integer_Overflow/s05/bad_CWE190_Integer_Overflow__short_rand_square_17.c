void FUN0()
{
    int i,j;
    short data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        data = (short)RAND32();
    }
    for(j = 0; j < 1; j++)
    {
        {
<START>
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
}
