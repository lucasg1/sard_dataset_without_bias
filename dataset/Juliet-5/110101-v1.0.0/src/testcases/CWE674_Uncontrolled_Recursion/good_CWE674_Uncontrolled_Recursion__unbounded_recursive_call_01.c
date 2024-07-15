void FUN0(unsigned level)
{
    if (level > MAX_RECURSION) 
    {
        printLine("ERROR IN RECURSION");
        return;
    }
    if (level == 0) 
    {
        return;
    }
    FUN0(level - 1);
}
void FUN1()
{
    FUN0(UINT_MAX);
}
