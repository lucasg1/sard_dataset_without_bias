void FUN0(int * * dataPtr);
void FUN1()
{
    int * data;
    ; 
    FUN0(&data);
}
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
<START>
    printIntLine(*data);
<END>
}
