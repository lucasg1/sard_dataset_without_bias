void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN2(int * data);
void FUN3(int * data)
{
    FUN2(data);
}
void FUN3(int * data);
void FUN0(int * data)
{
    FUN3(data);
}
void FUN1(int * data);
void FUN7()
{
    int * data;
    data = NULL; 
    data = (int *)calloc(1, sizeof(int));
    FUN1(data);
}
void FUN2(int * data)
{
<START>
    data[0] = 5;
<END>
    printIntLine(data[0]);
    free(data);
}
