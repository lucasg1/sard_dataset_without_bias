void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        ImpersonateSelf(SecurityImpersonation);
<END>
    }
    else
    {
        if (!ImpersonateSelf(SecurityImpersonation))
        {
            exit(1);
        }
    }
}
