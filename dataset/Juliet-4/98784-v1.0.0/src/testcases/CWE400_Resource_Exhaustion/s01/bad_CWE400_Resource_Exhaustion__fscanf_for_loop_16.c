void FUN0()
{
    int count;
    count = -1;
    while(1)
    {
        fscanf(stdin, "%d", &count);
        break;
    }
    while(1)
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
        break;
    }
}
