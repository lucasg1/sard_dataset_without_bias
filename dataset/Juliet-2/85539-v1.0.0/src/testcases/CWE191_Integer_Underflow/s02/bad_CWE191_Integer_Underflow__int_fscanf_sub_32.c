void FUN0()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    data = 0;
    {
        int data = *dataPtr1;
        fscanf(stdin, "%d", &data);
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
        {
<START>
            int result = data - 1;
<END>
            printIntLine(result);
        }
    }
}
