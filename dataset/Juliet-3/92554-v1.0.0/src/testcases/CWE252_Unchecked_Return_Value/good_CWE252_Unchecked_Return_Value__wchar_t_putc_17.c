void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        if (putwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("putwc failed!");
        }
    }
}
