void FUN0()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    data = 0;
    {
        int data = *dataPtr1;
        data = INT_MAX;
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
        {
<START>
            int result = data * data;
<END>
            printIntLine(result);
        }
    }
}
