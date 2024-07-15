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
void FUN1(int * data);
void FUN5(int * data)
{
    FUN1(data);
}
void FUN3(int * data);
void FUN7(int * data)
{
    FUN3(data);
}
void FUN5(int * data);
void FUN9()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    FUN5(data);
}
void FUN7(int * data);
void FUN11()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    FUN7(data);
}
void FUN13(int * data);
void FUN0(int * data)
{
    FUN13(data);
}
void FUN15(int * data);
void FUN2(int * data)
{
    FUN15(data);
}
void FUN13(int * data)
{
    ; 
}
void FUN15(int * data)
{
    free(data);
}
