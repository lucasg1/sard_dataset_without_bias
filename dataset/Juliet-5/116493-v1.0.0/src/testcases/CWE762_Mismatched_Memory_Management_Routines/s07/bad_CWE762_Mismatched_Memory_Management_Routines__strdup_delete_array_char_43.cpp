namespace NAMESPACE0
{
void FUN0(char * &data)
{
    {
        char myString[] = "myString";
        data = strdup(myString);
    }
}
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(data);
<START>
    delete [] data;
<END>
}
} 
