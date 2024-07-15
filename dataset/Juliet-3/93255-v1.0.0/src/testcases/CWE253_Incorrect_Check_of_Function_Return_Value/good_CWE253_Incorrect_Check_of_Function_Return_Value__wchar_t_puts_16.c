void FUN0()
{
    while(1)
    {
        if (PUTS(L"string") == WEOF)
        {
            printLine("puts failed!");
        }
        break;
    }
}
