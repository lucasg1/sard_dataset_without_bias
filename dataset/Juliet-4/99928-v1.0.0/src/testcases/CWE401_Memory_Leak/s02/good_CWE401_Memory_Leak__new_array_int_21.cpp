namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static int VAR3 = 0;
void FUN0(int * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete[] data;
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[100];
    data[0] = 5;
    printIntLine(data[0]);
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(int * data)
{
    if(VAR2)
    {
        delete[] data;
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    data = new int[100];
    data[0] = 5;
    printIntLine(data[0]);
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(int * data)
{
    if(VAR3)
    {
        ; 
    }
}
void FUN5()
{
    int * data;
    data = NULL;
    int VAR4[100];
    data = VAR4;
    data[0] = 5;
    printIntLine(data[0]);
    VAR3 = 1; 
    FUN4(data);
}
} 
