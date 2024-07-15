void FUN0()
{
    if(globalTrue)
    {
<START>
        if (putwc((wchar_t)L'A', stdout) == 0)
<END>
        {
            printLine("putwc failed!");
        }
    }
}
