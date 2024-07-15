void FUN0()
{
    int data;
    data = -1;
    switch(6)
    {
    case 6:
        data = 10;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        int buffer[10] = { 0 };
        if (data >= 0)
        {
<START>
            printIntLine(buffer[data]);
<END>
        }
        else
        {
            printLine("ERROR: Array index is negative");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
