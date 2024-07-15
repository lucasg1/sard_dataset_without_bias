void FUN0()
{
    if(globalFive==5)
    {
<START>
        if (fputwc((wchar_t)L'A', stdout) == 0)
<END>
        {
            printLine("fputwc failed!");
        }
    }
}
