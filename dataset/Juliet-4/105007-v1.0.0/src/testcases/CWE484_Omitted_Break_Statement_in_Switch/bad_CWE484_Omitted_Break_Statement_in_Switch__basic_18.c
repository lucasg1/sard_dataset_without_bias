void FUN0()
{
    goto sink;
sink:
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
}
