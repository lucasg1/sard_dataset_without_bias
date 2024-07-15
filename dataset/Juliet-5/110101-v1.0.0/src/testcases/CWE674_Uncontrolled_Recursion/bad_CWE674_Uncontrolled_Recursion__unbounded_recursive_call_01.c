void FUN0(unsigned level)
{
<START>
    if (level == 0) 
<END>
    {
        return;
    }
    FUN0(level - 1);
}
void FUN1()
{
    FUN0(UINT_MAX);
}
