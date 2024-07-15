void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    FUN0(data);
}
void FUN2(int * data);
void FUN3()
{
    int * data;
    data = NULL;
    data = (int *)calloc(100, sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    FUN2(data);
}
void FUN5(int * data);
void FUN0(int * data)
{
    FUN5(data);
}
void FUN7(int * data);
void FUN2(int * data)
{
    FUN7(data);
}
void FUN9(int * data);
void FUN5(int * data)
{
    FUN9(data);
}
void FUN11(int * data);
void FUN7(int * data)
{
    FUN11(data);
}
void FUN9(int * data)
{
    ; 
}
void FUN11(int * data)
{
    free(data);
}
