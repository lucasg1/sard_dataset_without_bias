void FUN0()
{
    int * data;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    data = NULL; 
    {
        int * data = *dataPtr1;
        data = (int *)malloc(1*sizeof(int));
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
<START>
        data[0] = 5;
<END>
        printIntLine(data[0]);
        free(data);
    }
}
