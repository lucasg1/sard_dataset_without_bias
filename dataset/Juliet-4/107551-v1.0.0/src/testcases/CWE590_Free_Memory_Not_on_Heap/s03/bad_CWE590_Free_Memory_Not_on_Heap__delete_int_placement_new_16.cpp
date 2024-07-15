namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    while(1)
    {
        {
            char buffer[sizeof(int)];
            int * dataBuffer = new(buffer) int;
            *dataBuffer = 5;
            data = dataBuffer;
        }
        break;
    }
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 
