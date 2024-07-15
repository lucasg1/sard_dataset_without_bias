void FUN0()
{
    short data;
    data = 0;
    while(1)
    {
        fscanf (stdin, "%hd", &data);
        break;
    }
    while(1)
    {
        {
<START>
            short result = data * data;
<END>
            printIntLine(result);
        }
        break;
    }
}
