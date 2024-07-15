void FUN0()
{
    if(globalReturnsTrue())
    {
<START>
        if (ImpersonateSelf(SecurityImpersonation) > 0)
<END>
        {
            exit(1);
        }
    }
}
