void FUN0()
{
    if(GLOBAL_CONST_TRUE)
    {
<START>
        if (fputwc((wchar_t)L'A', stdout) == 0)
<END>
        {
            printLine("fputwc failed!");
        }
    }
}
