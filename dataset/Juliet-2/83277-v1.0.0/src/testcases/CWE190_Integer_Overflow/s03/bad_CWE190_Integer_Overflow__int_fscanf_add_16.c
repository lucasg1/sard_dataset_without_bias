void FUN0()
{
    int data;
    data = 0;
    while(1)
    {
        fscanf(stdin, "%d", &data);
        break;
    }
    while(1)
    {
        {
<START>
            int result = data + 1;
<END>
            printIntLine(result);
        }
        break;
    }
}
