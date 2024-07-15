void FUN0()
{
    short data;
    data = 0;
    if(globalFive==5)
    {
        fscanf (stdin, "%hd", &data);
    }
    if(globalFive==5)
    {
        {
<START>
            data--;
<END>
            short result = data;
            printIntLine(result);
        }
    }
}
