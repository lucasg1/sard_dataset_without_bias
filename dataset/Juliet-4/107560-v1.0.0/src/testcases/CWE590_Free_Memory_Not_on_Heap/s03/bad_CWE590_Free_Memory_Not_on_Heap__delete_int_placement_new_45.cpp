namespace NAMESPACE0
{
static int * VAR1;
static int * VAR2;
void FUN0()
{
    int * data = VAR1;
    printIntLine(*data);
<START>
    delete data;
<END>
}
void FUN1()
{
    int * data;
    data = NULL; 
    {
        char buffer[sizeof(int)];
        int * dataBuffer = new(buffer) int;
        *dataBuffer = 5;
        data = dataBuffer;
    }
    VAR1 = data;
    FUN0();
}
} 
