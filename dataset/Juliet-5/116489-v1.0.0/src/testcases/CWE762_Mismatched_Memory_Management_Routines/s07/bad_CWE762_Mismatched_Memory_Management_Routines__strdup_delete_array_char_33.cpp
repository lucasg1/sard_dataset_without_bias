namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
    }
    {
        char * data = dataRef;
<START>
        delete [] data;
<END>
    }
}
} 
