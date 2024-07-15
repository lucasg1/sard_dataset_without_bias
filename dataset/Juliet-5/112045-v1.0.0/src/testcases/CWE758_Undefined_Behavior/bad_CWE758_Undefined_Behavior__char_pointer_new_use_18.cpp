namespace NAMESPACE0
{
void FUN0()
{
    goto sink;
sink:
    {
        char * * pointer = new char *;
<START>
        char * data = *pointer; 
<END>
        delete pointer;
        printLine(data);
    }
}
} 
