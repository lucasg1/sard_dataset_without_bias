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
    if(data < 0) 
    {
<START>
        int result = data * 2;
<END>
        printIntLine(result);
    }
}
