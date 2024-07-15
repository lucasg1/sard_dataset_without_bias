namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    data = NULL; 
    {
        static int dataBuffer;
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
