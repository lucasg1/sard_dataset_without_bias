void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL; 
    data = (int *)calloc(1, sizeof(int));
    FUN0(data);
}
void FUN0(int * data)
{
<START>
    data[0] = 5;
<END>
    printIntLine(data[0]);
    free(data);
}
