void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        if (ImpersonateSelf(SecurityImpersonation) > 0)
<END>
        {
            exit(1);
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
