void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN2(int * data);
void FUN3()
{
    int * data;
    data = NULL;
    data = (int *)malloc(50*sizeof(int));
    FUN2(data);
}
void FUN1(int * data);
void FUN5(int * data)
{
    FUN1(data);
}
void FUN5(int * data);
void FUN2(int * data)
{
    FUN5(data);
}
void FUN0(int * data)
{
    {
        int source[100] = {0}; 
<START>
        memcpy(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
        free(data);
    }
}
