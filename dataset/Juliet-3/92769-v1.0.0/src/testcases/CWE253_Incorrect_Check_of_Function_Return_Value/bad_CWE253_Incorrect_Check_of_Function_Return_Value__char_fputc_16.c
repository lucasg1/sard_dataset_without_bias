void FUN0()
{
    while(1)
    {
<START>
        if (fputc((int)'A', stdout) == 0)
<END>
        {
            printLine("fputc failed!");
        }
        break;
    }
}
