void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        PUTS(L"string");
<END>
    }
    else
    {
        if (PUTS(L"string") == WEOF)
        {
            printLine("puts failed!");
        }
    }
}
