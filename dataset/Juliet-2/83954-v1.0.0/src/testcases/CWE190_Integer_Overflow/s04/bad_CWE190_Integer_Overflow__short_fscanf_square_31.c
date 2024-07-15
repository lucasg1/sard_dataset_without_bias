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
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
}
