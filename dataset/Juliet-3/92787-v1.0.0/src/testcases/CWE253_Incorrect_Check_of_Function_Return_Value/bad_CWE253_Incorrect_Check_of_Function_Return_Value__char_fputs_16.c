void FUN0()
{
    while(1)
    {
<START>
        if (fputs("string", stdout) == 0)
<END>
        {
            printLine("fputs failed!");
        }
        break;
    }
}
