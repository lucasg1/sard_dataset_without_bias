void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        if (PUTS("string") == 0)
<END>
        {
            printLine("puts failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
