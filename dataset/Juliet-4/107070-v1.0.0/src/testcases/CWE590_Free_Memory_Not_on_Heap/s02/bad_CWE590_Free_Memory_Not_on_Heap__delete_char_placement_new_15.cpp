namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    switch(6)
    {
    case 6:
    {
        char buffer[sizeof(char)];
        char * dataBuffer = new(buffer) char;
        *dataBuffer = 'A';
        data = dataBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printHexCharLine(*data);
<START>
    delete data;
<END>
}
} 
