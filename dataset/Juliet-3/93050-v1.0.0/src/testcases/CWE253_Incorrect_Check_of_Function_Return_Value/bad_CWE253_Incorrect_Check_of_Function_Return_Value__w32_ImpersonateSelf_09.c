void FUN0()
{
    if(GLOBAL_CONST_TRUE)
    {
<START>
        if (ImpersonateSelf(SecurityImpersonation) > 0)
<END>
        {
            exit(1);
        }
    }
}
