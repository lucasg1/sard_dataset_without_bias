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
        char myString[] = "myString";
        data = strdup(myString);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        delete data;
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
