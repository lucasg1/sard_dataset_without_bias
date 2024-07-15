void FUN0()
{
    int data;
    if(GLOBAL_CONST_TRUE)
    {
        data = 5;
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        data = 10;
<END>
        printIntLine(data);
    }
}
