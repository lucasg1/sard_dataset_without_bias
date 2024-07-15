void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
<START>
        if (fputws(L"string", stdout) == 0)
<END>
        {
            printLine("fputws failed!");
        }
    }
}
