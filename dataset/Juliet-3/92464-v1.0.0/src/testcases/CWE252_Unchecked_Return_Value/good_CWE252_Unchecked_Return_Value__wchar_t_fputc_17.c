void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        if (fputwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("fputwc failed!");
        }
    }
}
