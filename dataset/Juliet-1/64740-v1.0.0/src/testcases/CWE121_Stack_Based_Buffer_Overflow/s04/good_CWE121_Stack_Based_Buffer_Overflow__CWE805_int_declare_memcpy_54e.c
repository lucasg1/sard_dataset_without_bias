void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN2(int * data);
void FUN3()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    data = VAR1;
    FUN2(data);
}
void FUN1(int * data);
void FUN6(int * data)
{
    FUN1(data);
}
void FUN6(int * data);
void FUN2(int * data)
{
    FUN6(data);
}
void FUN0(int * data)
{
    {
        int source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
