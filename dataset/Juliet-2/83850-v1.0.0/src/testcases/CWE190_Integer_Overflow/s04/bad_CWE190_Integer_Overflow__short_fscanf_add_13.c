void FUN0()
{
    short data;
    data = 0;
    if(GLOBAL_CONST_FIVE==5)
    {
        fscanf (stdin, "%hd", &data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
<START>
            short result = data + 1;
<END>
            printIntLine(result);
        }
    }
}
