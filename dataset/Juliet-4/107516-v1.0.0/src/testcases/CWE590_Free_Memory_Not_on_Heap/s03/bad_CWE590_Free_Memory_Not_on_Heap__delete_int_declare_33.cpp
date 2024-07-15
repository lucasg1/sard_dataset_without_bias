namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    data = NULL; 
    {
        int dataBuffer;
        dataBuffer = 5;
        data = &dataBuffer;
    }
    {
        int * data = dataRef;
        printIntLine(*data);
<START>
        delete data;
<END>
    }
}
} 
