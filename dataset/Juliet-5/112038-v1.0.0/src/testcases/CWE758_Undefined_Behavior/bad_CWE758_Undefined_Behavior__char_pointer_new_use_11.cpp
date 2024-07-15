namespace NAMESPACE0
{
void FUN0()
{
    if(globalReturnsTrue())
    {
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
} 
