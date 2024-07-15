void FUN0()
{
    int i,j;
    int count;
    count = -1;
    for(i = 0; i < 1; i++)
    {
        count = RAND32();
    }
    for(j = 0; j < 1; j++)
    {
        {
            size_t i = 0;
<START>
            for (i = 0; i < (size_t)count; i++)
<END>
            {
                printLine("Hello");
            }
        }
    }
}
