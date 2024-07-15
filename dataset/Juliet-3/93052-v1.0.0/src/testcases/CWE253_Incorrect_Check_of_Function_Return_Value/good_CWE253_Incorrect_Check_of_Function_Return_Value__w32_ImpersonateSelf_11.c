void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (!ImpersonateSelf(SecurityImpersonation))
        {
            exit(1);
        }
    }
}
void FUN1()
{
    if(globalReturnsTrue())
    {
        if (!ImpersonateSelf(SecurityImpersonation))
        {
            exit(1);
        }
    }
}
