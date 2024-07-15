void FUN0()
{
    while(1)
    {
        if (fputws(L"string", stdout) == WEOF)
        {
            printLine("fputws failed!");
        }
        break;
    }
}
