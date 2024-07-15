void FUN0()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    {
        short dataCopy = data;
        short data = dataCopy;
        {
<START>
            data--;
<END>
            short result = data;
            printIntLine(result);
        }
    }
}
