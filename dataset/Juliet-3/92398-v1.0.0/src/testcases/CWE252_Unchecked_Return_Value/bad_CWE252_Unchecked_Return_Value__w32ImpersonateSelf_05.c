static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
<START>
        ImpersonateSelf(SecurityImpersonation);
<END>
    }
}
