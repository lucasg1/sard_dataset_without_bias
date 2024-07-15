namespace NAMESPACE0
{
void FUN0(int * data)
{
    printIntLine(*data);
<START>
    delete data;
<END>
}
void FUN1()
{
    int * data;
    data = NULL; 
    {
        char buffer[sizeof(int)];
        int * dataBuffer = new(buffer) int;
        *dataBuffer = 5;
        data = dataBuffer;
    }
    FUN0(data);
}
} 
