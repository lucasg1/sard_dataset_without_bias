void FUN0()
{
    while(1)
    {
        if (fwprintf(stdout, L"%s\n", L"string") < 0)
        {
            printLine("fwprintf failed!");
        }
        break;
    }
}
