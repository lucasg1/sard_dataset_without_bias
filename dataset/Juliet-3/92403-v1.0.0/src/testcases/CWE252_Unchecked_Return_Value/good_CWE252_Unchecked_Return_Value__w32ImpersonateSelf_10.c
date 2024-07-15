void FUN0()
{
    if(globalFalse)
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
    if(globalTrue)
    {
        if (!ImpersonateSelf(SecurityImpersonation))
        {
            exit(1);
        }
    }
}
