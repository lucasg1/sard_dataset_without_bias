namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    {
        static int dataBuffer;
        dataBuffer = 5;
        data = &dataBuffer;
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
