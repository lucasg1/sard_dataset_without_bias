void FUN0()
{
    int count;
    count = -1;
    switch(6)
    {
    case 6:
        fscanf(stdin, "%d", &count);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
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
    default:
        printLine("Benign, fixed string");
        break;
    }
}
