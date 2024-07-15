void FUN0()
{
    int data;
    data = 0;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = RAND32();
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
<START>
            ++data;
<END>
            int result = data;
            printIntLine(result);
        }
    }
}
