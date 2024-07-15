void FUN0()
{
    if(globalReturnsTrue())
    {
<START>
        if (PUTS(L"string") == 0)
<END>
        {
            printLine("puts failed!");
        }
    }
}
