void FUN0()
{
    while(1)
    {
<START>
        if (ImpersonateSelf(SecurityImpersonation) > 0)
<END>
        {
            exit(1);
        }
        break;
    }
}
