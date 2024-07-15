void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        if (!ImpersonateSelf(SecurityImpersonation))
        {
            exit(1);
        }
        break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
        if (!ImpersonateSelf(SecurityImpersonation))
        {
            exit(1);
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
