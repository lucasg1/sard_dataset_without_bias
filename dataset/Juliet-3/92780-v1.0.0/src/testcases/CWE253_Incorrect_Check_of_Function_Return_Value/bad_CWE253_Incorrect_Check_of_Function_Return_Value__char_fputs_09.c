void FUN0()
{
    if(GLOBAL_CONST_TRUE)
    {
<START>
        if (fputs("string", stdout) == 0)
<END>
        {
            printLine("fputs failed!");
        }
    }
}
