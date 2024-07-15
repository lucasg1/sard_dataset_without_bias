void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        printLine(getenv("PATH"));
<END>
    }
    else
    {
        printLine("Not in path");
    }
}
