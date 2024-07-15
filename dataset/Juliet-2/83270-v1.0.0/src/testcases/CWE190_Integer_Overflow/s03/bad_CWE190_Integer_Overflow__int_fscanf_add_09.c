void FUN0()
{
    int data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        fscanf(stdin, "%d", &data);
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
