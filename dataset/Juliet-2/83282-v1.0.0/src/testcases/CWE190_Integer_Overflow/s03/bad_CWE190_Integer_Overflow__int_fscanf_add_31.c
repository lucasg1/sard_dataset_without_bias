void FUN0()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    {
        int dataCopy = data;
        int data = dataCopy;
        {
<START>
            int result = data + 1;
<END>
            printIntLine(result);
        }
    }
}
