void FUN0()
{
    while(1)
    {
        if (putwc((wchar_t)L'A', stdout) == WEOF)
        {
            printLine("putwc failed!");
        }
        break;
    }
}
