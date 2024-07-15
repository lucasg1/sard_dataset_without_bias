void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        if (fputc((int)'A', stdout) == 0)
<END>
        {
            printLine("fputc failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
