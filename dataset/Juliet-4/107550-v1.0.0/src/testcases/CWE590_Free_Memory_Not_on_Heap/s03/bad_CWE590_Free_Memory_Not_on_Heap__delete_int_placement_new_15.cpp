namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL; 
    switch(6)
    {
    case 6:
    {
        char buffer[sizeof(int)];
        int * dataBuffer = new(buffer) int;
        *dataBuffer = 5;
        data = dataBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 
