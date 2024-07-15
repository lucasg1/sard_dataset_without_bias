namespace NAMESPACE0
{
void FUN0()
{
    int i;
    int * data;
    data = NULL; 
    for(i = 0; i < 1; i++)
    {
        {
            char buffer[sizeof(int)];
            int * dataBuffer = new(buffer) int;
            *dataBuffer = 5;
            data = dataBuffer;
        }
    }
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 
