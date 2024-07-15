void FUN0()
{
    int * data;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    {
        int * data = *dataPtr1;
        data = NULL;
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
<START>
        printIntLine(*data);
<END>
    }
}
