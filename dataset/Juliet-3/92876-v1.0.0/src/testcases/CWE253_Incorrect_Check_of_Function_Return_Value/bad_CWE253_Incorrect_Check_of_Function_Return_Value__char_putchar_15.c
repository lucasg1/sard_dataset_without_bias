void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        if (putchar((int)'A') == 0)
<END>
        {
            printLine("putchar failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
