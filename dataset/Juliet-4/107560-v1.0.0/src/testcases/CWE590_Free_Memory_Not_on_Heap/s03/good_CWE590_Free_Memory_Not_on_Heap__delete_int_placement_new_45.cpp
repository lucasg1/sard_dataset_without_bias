namespace NAMESPACE0
{
static int * VAR1;
static int * VAR2;
void FUN0()
{
    int * data = VAR2;
    printIntLine(*data);
    delete data;
}
void FUN1()
{
    int * data;
    data = NULL; 
    {
        int * dataBuffer = new int;
        *dataBuffer = 5;
        data = dataBuffer;
    }
    VAR2 = data;
    FUN0();
}
} 
