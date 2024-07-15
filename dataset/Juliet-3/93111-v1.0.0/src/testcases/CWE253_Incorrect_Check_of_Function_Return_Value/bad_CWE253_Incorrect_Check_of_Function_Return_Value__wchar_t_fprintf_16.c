void FUN0()
{
    while(1)
    {
<START>
        if (fwprintf(stdout, L"%s\n", L"string") == 0)
<END>
        {
            printLine("fwprintf failed!");
        }
        break;
    }
}
