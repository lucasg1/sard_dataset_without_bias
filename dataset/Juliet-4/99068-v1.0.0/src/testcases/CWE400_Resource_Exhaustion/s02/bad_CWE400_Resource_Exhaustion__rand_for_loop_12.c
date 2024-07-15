void FUN0()
{
    int count;
    count = -1;
    if(globalReturnsTrueOrFalse())
    {
        count = RAND32();
    }
    else
    {
        count = 20;
    }
    if(globalReturnsTrueOrFalse())
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
    else
    {
        {
            size_t i = 0;
            if (count > 0 && count <= 20)
            {
                for (i = 0; i < (size_t)count; i++)
                {
                    printLine("Hello");
                }
            }
        }
    }
}
