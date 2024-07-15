void FUN0(void * dataVoidPtr);
void FUN1()
{
    int * data;
    int dataUninitArray[10];
    data = dataUninitArray;
    ; 
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    int * * dataPtr = (int * *)dataVoidPtr;
    int * data = (*dataPtr);
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
