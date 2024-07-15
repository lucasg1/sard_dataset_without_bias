void FUN0()
{
    switch(6)
    {
    case 6:
    {
        int x = (rand() % 3);
        switch (x)
        {
<START>
        case 0:
<END>
            printLine("0");
        case 1:
            printLine("1");
            break;
        case 2:
            printLine("2");
            break;
        default:
            printLine("Invalid Number");
            break;
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
