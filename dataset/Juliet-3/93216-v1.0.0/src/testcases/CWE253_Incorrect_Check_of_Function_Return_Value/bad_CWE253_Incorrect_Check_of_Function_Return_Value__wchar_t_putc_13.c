void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        if (putwc((wchar_t)L'A', stdout) == 0)
<END>
        {
            printLine("putwc failed!");
        }
    }
}
