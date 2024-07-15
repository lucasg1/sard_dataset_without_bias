void FUN0()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    data = -1;
    {
        int data = *dataPtr1;
        data = 0;
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
<START>
        printIntLine(100 % data);
<END>
    }
}
