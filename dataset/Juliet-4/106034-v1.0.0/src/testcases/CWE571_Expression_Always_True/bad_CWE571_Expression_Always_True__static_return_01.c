static int FUN0() 
{
    return 1;
}
void FUN1() 
{
<START>
    if (FUN0()) 
<END>
    {
        printLine("Always prints");
    }
}
