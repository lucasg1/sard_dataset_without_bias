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
        char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
        memset(dataBuffer, 'A', 100-1); 
        dataBuffer[100-1] = '\0'; 
        data = dataBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printLine(data);
<START>
    delete [] data;
<END>
}
} 
