void FUN0()
{
    int count;
    count = -1;
    count = RAND32();
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
