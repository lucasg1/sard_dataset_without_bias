void FUN0()
{
    goto sink;
sink:
    if (!ImpersonateSelf(SecurityImpersonation))
    {
        exit(1);
    }
}
