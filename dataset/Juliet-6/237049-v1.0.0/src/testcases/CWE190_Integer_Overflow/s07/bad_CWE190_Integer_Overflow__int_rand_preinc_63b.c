void FUN0(int * dataPtr);
void FUN1()
{
    int data;
    data = 0;
    data = RAND32();
    FUN0(&data);
}
void FUN0(int * dataPtr)
{
    int data = *dataPtr;
    {
<START>
        ++data;
<END>
        int result = data;
        printIntLine(result);
    }
}
