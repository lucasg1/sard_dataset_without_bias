namespace NAMESPACE0
{
void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
