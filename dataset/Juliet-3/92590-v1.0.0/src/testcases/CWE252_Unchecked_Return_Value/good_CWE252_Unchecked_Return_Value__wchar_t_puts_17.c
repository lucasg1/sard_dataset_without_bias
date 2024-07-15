void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        if (PUTS(L"string") == WEOF)
        {
            printLine("puts failed!");
        }
    }
}
