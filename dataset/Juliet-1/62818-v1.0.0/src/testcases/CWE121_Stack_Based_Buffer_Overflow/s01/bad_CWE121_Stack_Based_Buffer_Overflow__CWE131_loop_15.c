void FUN0()
{
    int * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (int *)ALLOCA(10);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        int source[10] = {0};
        size_t i;
        for (i = 0; i < 10; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        printIntLine(data[0]);
    }
}
