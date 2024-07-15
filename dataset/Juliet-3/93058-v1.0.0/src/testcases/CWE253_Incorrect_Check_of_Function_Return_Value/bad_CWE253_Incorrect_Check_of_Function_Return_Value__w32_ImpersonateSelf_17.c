void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
<START>
        if (ImpersonateSelf(SecurityImpersonation) > 0)
<END>
        {
            exit(1);
        }
    }
}
