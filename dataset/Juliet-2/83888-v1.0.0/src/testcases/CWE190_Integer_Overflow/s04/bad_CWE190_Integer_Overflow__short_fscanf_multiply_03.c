void FUN0()
{
    short data;
    data = 0;
    if(5==5)
    {
        fscanf (stdin, "%hd", &data);
    }
    if(5==5)
    {
        if(data > 0) 
        {
<START>
            short result = data * 2;
<END>
            printIntLine(result);
        }
    }
}
