void FUN0()
{
    int * data;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    data = NULL;
    {
        int * data = *dataPtr1;
        data = (int *)ALLOCA(100*sizeof(int));
        data[0] = 5;
        printIntLine(data[0]);
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
        ; 
    }
}
void FUN1()
{
    int * data;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    data = NULL;
    {
        int * data = *dataPtr1;
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
        free(data);
    }
}
