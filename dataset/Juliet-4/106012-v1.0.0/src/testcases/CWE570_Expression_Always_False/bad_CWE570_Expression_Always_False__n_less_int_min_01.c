void FUN0() 
{
    int intRand = rand();
<START>
    if (intRand < INT_MIN) 
<END>
    {
        printLine("Never prints");
    }
}
