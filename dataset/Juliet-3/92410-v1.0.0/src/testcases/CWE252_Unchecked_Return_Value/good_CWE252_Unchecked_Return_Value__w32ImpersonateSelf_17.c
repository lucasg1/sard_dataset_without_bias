void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        if (!ImpersonateSelf(SecurityImpersonation))
        {
            exit(1);
        }
    }
}
