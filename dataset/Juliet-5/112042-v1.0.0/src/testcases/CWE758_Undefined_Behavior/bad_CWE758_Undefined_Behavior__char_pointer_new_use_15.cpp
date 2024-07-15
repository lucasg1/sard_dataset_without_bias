namespace NAMESPACE0
{
void FUN0()
{
    switch(6)
    {
    case 6:
    {
        char * * pointer = new char *;
<START>
        char * data = *pointer; 
<END>
        delete pointer;
        printLine(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
