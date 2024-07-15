void FUN0(int * data);
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    int VAR0[50];
    int VAR1[100];
    data = VAR1;
    funcPtr(data);
}
void FUN0(int * data)
{
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
