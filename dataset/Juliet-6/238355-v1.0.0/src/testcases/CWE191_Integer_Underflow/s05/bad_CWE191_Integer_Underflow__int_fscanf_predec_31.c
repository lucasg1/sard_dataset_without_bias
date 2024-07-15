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
            --data;
<END>
            int result = data;
            printIntLine(result);
        }
    }
}
