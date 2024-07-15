namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    {
        int * dataBuffer = (int *)ALLOCA(sizeof(int));
        *dataBuffer = 5;
        data = dataBuffer;
    }
    {
        int * dataCopy = data;
        int * data = dataCopy;
        printIntLine(*data);
<START>
        delete data;
<END>
    }
}
} 
