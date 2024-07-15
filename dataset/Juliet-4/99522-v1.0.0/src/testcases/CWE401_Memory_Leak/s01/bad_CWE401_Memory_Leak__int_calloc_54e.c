void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)calloc(100, sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    FUN0(data);
}
void FUN2(int * data);
void FUN0(int * data)
{
    FUN2(data);
}
void FUN4(int * data);
void FUN5(int * data)
{
    FUN4(data);
}
void FUN5(int * data);
void FUN2(int * data)
{
    FUN5(data);
}
void FUN4(int * data)
{
<START>
<END>
    ; 
}
