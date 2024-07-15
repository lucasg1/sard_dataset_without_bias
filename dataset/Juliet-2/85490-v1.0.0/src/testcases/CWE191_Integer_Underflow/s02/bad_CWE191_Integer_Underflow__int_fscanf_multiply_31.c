void FUN0()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    {
        int dataCopy = data;
        int data = dataCopy;
        if(data < 0) 
        {
<START>
            int result = data * 2;
<END>
            printIntLine(result);
        }
    }
}
