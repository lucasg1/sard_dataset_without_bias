namespace NAMESPACE0
{
void FUN0()
{
    if(5==5)
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
