void FUN0()
{
    while(1)
    {
<START>
        if (fputws(L"string", stdout) == 0)
<END>
        {
            printLine("fputws failed!");
        }
        break;
    }
}
