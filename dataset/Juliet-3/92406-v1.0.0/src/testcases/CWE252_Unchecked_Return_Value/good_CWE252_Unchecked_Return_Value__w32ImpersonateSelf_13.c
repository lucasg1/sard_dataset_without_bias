void FUN0()
{
    if(GLOBAL_CONST_FIVE!=5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        if (!ImpersonateSelf(SecurityImpersonation))
        {
            exit(1);
        }
    }
}
