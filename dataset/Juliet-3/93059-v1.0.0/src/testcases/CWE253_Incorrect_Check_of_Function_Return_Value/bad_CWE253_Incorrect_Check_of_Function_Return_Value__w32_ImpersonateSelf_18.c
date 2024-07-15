void FUN0()
{
    goto sink;
sink:
<START>
    if (ImpersonateSelf(SecurityImpersonation) > 0)
<END>
    {
        exit(1);
    }
}
