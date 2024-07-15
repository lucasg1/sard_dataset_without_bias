void FUN0(int * * dataPtr);
void FUN1()
{
    int * data;
    int dataUninitArray[10];
    data = dataUninitArray;
    ; 
    FUN0(&data);
}
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
    {
        int i;
        for(i=0; i<10; i++)
        {
<START>
            printIntLine(data[i]);
<END>
        }
    }
}
