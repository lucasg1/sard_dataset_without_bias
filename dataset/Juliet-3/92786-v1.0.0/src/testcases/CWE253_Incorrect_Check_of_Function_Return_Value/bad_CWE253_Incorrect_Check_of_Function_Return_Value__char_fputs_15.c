void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        if (fputs("string", stdout) == 0)
<END>
        {
            printLine("fputs failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
