void FUN0()
{
    while(1)
    {
        if (!ImpersonateSelf(SecurityImpersonation))
        {
            exit(1);
        }
        break;
    }
}
