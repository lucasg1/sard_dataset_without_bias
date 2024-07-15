void FUN0()
{
    int count;
    count = -1;
    if(globalReturnsTrue())
    {
        count = RAND32();
    }
    if(globalReturnsTrue())
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
