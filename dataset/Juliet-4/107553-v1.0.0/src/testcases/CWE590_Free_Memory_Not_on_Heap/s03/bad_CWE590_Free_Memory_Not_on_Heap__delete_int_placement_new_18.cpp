namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    goto source;
source:
    {
        char buffer[sizeof(int)];
        int * dataBuffer = new(buffer) int;
        *dataBuffer = 5;
        data = dataBuffer;
    }
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 
