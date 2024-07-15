void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        if (putc((int)'A', stdout) == 0)
<END>
        {
            printLine("putc failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
