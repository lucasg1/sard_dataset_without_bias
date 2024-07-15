void FUN0()
{
    int data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        data = RAND32();
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
<START>
            int result = data + 1;
<END>
            printIntLine(result);
        }
    }
}
