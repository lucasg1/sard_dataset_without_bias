namespace NAMESPACE0
{
void FUN0(int * data)
{
    ; 
}
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL;
    int VAR1[100];
    data = VAR1;
    data[0] = 5;
    printIntLine(data[0]);
    funcPtr(data);
}
void FUN2(int * data)
{
    delete[] data;
}
void FUN3()
{
    int * data;
    void (*funcPtr) (int *) = FUN2;
    data = NULL;
    data = new int[100];
    data[0] = 5;
    printIntLine(data[0]);
    funcPtr(data);
}
} 
