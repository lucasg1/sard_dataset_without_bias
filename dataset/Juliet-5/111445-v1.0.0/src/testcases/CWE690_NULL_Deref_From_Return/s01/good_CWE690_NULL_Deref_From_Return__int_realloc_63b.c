void FUN0(int * * data);
void FUN1()
{
    int * data;
    data = NULL; 
    data = (int *)realloc(data, 1*sizeof(int));
    FUN0(&data);
}
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
    if (data != NULL)
    {
        data[0] = 5;
        printIntLine(data[0]);
        free(data);
    }
}
