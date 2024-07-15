void FUN0()
{
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        if (!ImpersonateSelf(SecurityImpersonation))
        {
            exit(1);
        }
    }
}
