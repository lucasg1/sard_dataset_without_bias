void FUN0()
{
    int * data;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    data = NULL; 
    {
        int * data = *dataPtr1;
        data = (int *)realloc(data, 1*sizeof(int));
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
        if (data != NULL)
        {
            data[0] = 5;
            printIntLine(data[0]);
            free(data);
        }
    }
}
