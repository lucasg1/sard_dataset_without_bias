void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
<START>
        if (putwc((wchar_t)L'A', stdout) == 0)
<END>
        {
            printLine("putwc failed!");
        }
    }
}
