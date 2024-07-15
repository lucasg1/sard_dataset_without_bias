void FUN0()
{
    int count;
    count = -1;
    if(GLOBAL_CONST_TRUE)
    {
        count = RAND32();
    }
    if(GLOBAL_CONST_TRUE)
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
