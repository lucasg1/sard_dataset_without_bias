void FUN0()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    {
        short dataCopy = data;
        short data = dataCopy;
        if(data < 0) 
        {
<START>
            short result = data * 2;
<END>
            printIntLine(result);
        }
    }
}
