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
        if(data < 0) 
        {
<START>
            int result = data * 2;
<END>
            printIntLine(result);
        }
    }
}
