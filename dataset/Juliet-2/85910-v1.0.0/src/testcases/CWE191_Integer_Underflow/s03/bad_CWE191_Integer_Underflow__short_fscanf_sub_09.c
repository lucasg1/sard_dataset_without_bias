void FUN0()
{
    short data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        fscanf (stdin, "%hd", &data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
<START>
            short result = data - 1;
<END>
            printIntLine(result);
        }
    }
}
