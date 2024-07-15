static int staticFalse = 0; 
void FUN0() 
{
<START>
    if (staticFalse) 
<END>
    {
        printLine("Never prints");
    }
}
