void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        if (fputs("string", stdout) == 0)
<END>
        {
            printLine("fputs failed!");
        }
    }
}
