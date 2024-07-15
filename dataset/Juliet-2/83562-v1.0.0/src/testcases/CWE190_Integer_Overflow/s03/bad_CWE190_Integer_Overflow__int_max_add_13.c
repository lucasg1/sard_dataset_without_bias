void FUN0()
{
    int data;
    data = 0;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = INT_MAX;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
<START>
            int result = data + 1;
<END>
            printIntLine(result);
        }
    }
}
