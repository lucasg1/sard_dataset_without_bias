static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN0())
    {
<START>
        fwprintf(stdout, L"%s\n", L"string");
<END>
    }
}
