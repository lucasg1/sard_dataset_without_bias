static int FUN0() 
{
    return 0;
}
void FUN1() 
{
<START>
    if (FUN0()) 
<END>
    {
        printLine("Never prints");
    }
}
