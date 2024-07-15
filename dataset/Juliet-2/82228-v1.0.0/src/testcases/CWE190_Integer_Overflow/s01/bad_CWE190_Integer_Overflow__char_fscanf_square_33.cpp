namespace NAMESPACE0
{
void FUN0()
{
    char data;
    char &dataRef = data;
    data = ' ';
    fscanf (stdin, "%c", &data);
    {
        char data = dataRef;
        {
<START>
            char result = data * data;
<END>
            printHexCharLine(result);
        }
    }
}
} 
