void FUN0()
{
    if (!ImpersonateSelf(SecurityImpersonation))
    {
        exit(1);
    }
}
