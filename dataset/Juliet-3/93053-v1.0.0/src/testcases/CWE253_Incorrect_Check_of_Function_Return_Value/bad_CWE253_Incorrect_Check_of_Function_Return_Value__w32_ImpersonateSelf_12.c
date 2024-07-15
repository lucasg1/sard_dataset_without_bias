void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        if (ImpersonateSelf(SecurityImpersonation) > 0)
<END>
        {
            exit(1);
        }
    }
    else
    {
        if (!ImpersonateSelf(SecurityImpersonation))
        {
            exit(1);
        }
    }
}
