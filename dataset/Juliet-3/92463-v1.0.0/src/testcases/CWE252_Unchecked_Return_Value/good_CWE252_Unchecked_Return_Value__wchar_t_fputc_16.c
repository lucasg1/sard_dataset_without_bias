void FUN0()
{
    while(1)
    {
        if (fputwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("fputwc failed!");
        }
        break;
    }
}
