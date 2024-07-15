namespace NAMESPACE0
{
void FUN0()
{
    if(globalFive==5)
    {
        {
            wchar_t * * pointer = new wchar_t *;
<START>
            wchar_t * data = *pointer; 
<END>
            delete pointer;
            printWLine(data);
        }
    }
}
} 
