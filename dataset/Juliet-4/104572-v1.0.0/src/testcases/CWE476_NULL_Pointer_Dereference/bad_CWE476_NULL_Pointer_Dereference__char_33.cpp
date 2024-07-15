namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    {
        char * data = dataRef;
<START>
        printHexCharLine(data[0]);
<END>
    }
}
} 
