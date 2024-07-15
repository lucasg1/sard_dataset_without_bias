void FUN0(int * * dataPtr);
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
<START>
    data[0] = 5;
<END>
    printIntLine(data[0]);
    free(data);
}
