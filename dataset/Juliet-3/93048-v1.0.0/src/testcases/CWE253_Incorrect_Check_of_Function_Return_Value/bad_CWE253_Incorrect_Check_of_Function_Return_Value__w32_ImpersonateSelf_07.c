static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
<START>
        if (ImpersonateSelf(SecurityImpersonation) > 0)
<END>
        {
            exit(1);
        }
    }
}
