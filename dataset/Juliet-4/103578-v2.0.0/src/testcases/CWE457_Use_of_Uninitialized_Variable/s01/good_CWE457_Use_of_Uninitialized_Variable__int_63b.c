void FUN0(int * data);
void FUN1()
{
    int data;
    data = 5;
    FUN0(&data);
}
void FUN2(int * data);
void FUN3()
{
    int data;
    ; 
    FUN2(&data);
}
void FUN0(int * dataPtr)
{
    int data = *dataPtr;
    printIntLine(data);
}
void FUN2(int * dataPtr)
{
    *dataPtr = 5;
    int data = *dataPtr;
    printIntLine(data);
}
