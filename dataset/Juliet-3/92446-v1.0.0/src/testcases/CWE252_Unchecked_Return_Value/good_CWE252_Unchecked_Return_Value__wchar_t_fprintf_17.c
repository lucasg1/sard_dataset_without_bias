void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        if (fwprintf(stdout, L"%s\n", L"string") < 0)
        {
            printLine("fwprintf failed!");
        }
    }
}
